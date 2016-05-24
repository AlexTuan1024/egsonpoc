#include <limits.h>
#include <stdio.h>

int main() {
  printf("%lu~%lu \n", LONG_MIN, LONG_MAX);
  printf("%i~%i\n", INT_MIN, INT_MAX);
  printf("0~%u\n", UINT_MAX);
  // printf("0~%i\n",USHRT_MAX);
  return 0;
}