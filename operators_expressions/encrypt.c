#include <stdio.h>
int main() {
  int ch;
  while ((ch = getchar()) != EOF) {
    if (ch >= 'a' && ch <= 'z') {
      ch -= 'a';
      ch += 13;
      ch %= 26;
      ch += 'a';
    } else if (ch >= 'A' && ch <= 'Z') {
      ch += 'A';
      ch += 13;
      ch %= 26;
      ch += 'A';
    }
    putchar(ch);
  }
  return 0;
}