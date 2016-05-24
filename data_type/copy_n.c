#include <stdio.h>
#include <string.h>

void copy_n(char dst[], char src[], int n) {
  if (n > 0) {
    if (strlen(src) > 0) {
      int i = 0;
      int src_len = strlen(src);
      int min = src_len > n ? n : src_len;
      for (; i < min; ++i) {
        dst[i] = src[i];
      }
      if (src_len < n) {
        for (i = src_len; i < n; ++i)
          dst[i] = 0;
      }
    }
  } else
    printf("N should be bigger than 0.\n");
}
int main() {
  char from[] = "Super";
  char to[] = {};
  copy_n(to, from, 10);
  printf("%s\n", to);
  return 0;
}