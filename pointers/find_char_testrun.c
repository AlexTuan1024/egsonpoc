#include "find_char.h"
#include <stdio.h>
int main() {
  const char avengers[] = "CapIronmanThor";
  const char test[] = "ou";
  char *p;
  p = find_char(avengers, test);
  printf("%s\n", p);
  return 0;
}