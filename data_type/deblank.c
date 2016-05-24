#include <stdio.h>
#include <string.h>

#define NUL '\0'

void deblank(char[]);
int isWhite(int);

int main() {
  char captain[] = "Steven    Rogers  Steve";
  deblank(captain);
  puts(captain);
  return 0;
}
void deblank(char string[]) {
  char *dest;
  char *src;
  int ch;

  printf("%p\n",string);
  src = string;
  dest = string;
  printf("%p\n",string);
  while ((ch = *src++) != NUL) {
    if (isWhite(ch)) {
      if (src == string || !isWhite(dest[-1]))
        *dest++ = ' ';
    } else {
      *dest++ = ch;
    }
  }
  printf("%p\n%p\n",dest,string);
  // printf("%s\n%s\n",dest,string);
  *dest = NUL;
}

int isWhite(int ch) {
  return ch == ' ' || ch == '\t' || ch == '\v' || ch == '\f' || ch == '\n' ||
         ch == '\r';
}