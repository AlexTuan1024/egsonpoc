#include <stdio.h>
#include <string.h>

int lookup_keyword(char const *const desired_word, char const *keyword_table[],
                   int const size) {
  char const **kwp;
  /**
  * For each word in the table
  */
  for (kwp = keyword_table; kwp < keyword_table + size; kwp++)
    /**
    * If this word matches the one we are looking for,
    * return its position in the table.
    */
    if (strcmp(*kwp, desired_word) == 0)
      return kwp - keyword_table;
  /**
  * If not found.
  */
  return -1;
}

int main() {
  char const *keyword[] = {"captain", "hulk",    "ironman",
                           "thor",    "hawkeye", "spiderman"};
  char const *const desired = "thor";
  printf("%d\n", lookup_keyword(desired, keyword,
                                sizeof(keyword) / sizeof(keyword[0])));
  return 0;
}