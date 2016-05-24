#include "del_substr.h"
#include <stdio.h>
int 
main(){
  int result;
  char avengers[]="Captain Ironman Thor Hulk Vision";
  char kickout[]="Hulk";
  result = del_substr(avengers,kickout);
  printf("%s\n",avengers);
  return 0;
}