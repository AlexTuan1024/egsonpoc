#include <stdio.h>
#include <string.h>
int count_chars(char const *str, char const *chars) {
  char *hit;
  int count = 0;
  while ((hit = strpbrk(str, chars)) != NULL) {
    str = hit + 1;
    count += 1;
  }
  return count;
}

int main() {
  char str[] = "avengers assemble";
  char *look_for = "aeiou";
  printf("%d\n", count_chars(str, look_for));
  return 0;
}