#include <stdio.h>
#include <string.h>

int lookup_keyword(char const *const desired_word,
                   char const *keyword_table[]) {
  char const **kwp;
  for (kwp = keyword_table; *kwp != NULL; kwp++)
    if (strcmp(*kwp, desired_word) == 0)
      return kwp - keyword_table;
  return -1;
}

int main() {
  char const *keyword[] = {"captain", "hulk",    "ironman",
                           "thor",    "hawkeye", "spiderman",NULL};
  char const *const desired = "thor";
  printf("%d\n", lookup_keyword(desired, keyword));
  return 0;
}