#include <stdio.h>
#include <string.h>

char *my_strncat(char *dst, char *src, size_t dest_size) {
  register int len;
  len = strlen(dst);
  dest_size -= len + 1;
  if (dest_size > 0)
    strncat(dst + len, src, dest_size);
  return dst;
}

int main() {
  char str_dst[32] = "Avengers Assemble ";
  printf("%lu\n%d\n", strlen(str_dst), str_dst[strlen(str_dst)]);
  char *s_two = "Ultron Evolution Wolverine";
  my_strncat(str_dst, s_two, 32);
  puts(str_dst);
  printf("%lu\n%lu\n", strlen(str_dst), sizeof(str_dst));
}