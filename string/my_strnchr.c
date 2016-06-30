#include <stdio.h>
#include <string.h>
char *my_strchr(const char *str, int ch, int which) {
  char *answer = NULL;
  while (--which >= 0 && (answer = strchr(str, ch)) != NULL)
    str = answer + 1;
  return answer;
}
int main() {
  char str_s[64] = "When captain america threw his mighty shield";
  printf("%s\n", my_strchr(str_s, ' ', 3));
  return 0;
}