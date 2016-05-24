#include <stdio.h>
#include <string.h>

#define MAX_LINE 128
int
main(){
  char input_line[MAX_LINE]={};
  char tmp_storage[MAX_LINE];
  
  for(;fgets(input_line,MAX_LINE,stdin);strcpy(tmp_storage,input_line)){
    if(input_line[strlen(input_line)-1]=='\n')
      input_line[strlen(input_line)-1]=0;
    if(strcmp(tmp_storage,input_line)==0){
      
    }
  }
  
  return 0;
}