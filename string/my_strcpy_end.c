#include <string.h>
#include <stdio.h>
char *my_strcpy_end(char *dst,char *src){
	strcpy(dst,src);
	return strchr(dst,0);
}

int main(){
	char str_dst[32]="young justice";
	char *str_src="Artemis";
	printf("%ld\n",(my_strcpy_end(str_dst,str_src)-str_dst));
	return 0;
}