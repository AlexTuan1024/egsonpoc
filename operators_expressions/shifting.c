#include <stdio.h>
#include <limits.h>
int
main(){
  unsigned char ch=128;
  // printf("%i\n",CHAR_BIT);
  printf("%i\n",ch>>3);
  return 0;
}