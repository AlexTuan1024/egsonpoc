#include <stdio.h>
int
main(){
  printf("Input some charctors:");
  int ch;
  while((ch=getchar())!=EOF){
    if(ch>='A'&&ch<='Z')
      ch+='a'-'A';
    putchar(ch);
  }
  return 0;
}