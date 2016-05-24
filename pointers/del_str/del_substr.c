#include "del_substr.h"
#include <stdio.h>
#define TRUE 1
#define FALSE 0
#define NUL '\0'
char *match(char *str, char *want) {
  /*
  ** Keep looking while there are more characters in 'want'.We
  ** fall out the loop if we get a match.
  */
  while (*want != NUL)
    if (*want++ != *str++)
      return NULL;
  return str;
}
int del_substr(char *src, const char *substr) {
  char *next;
  /*
  ** Look through the string for the first occurrence of the substring.
  */
  while (*src != '\0') {
    next = match(src, substr);
    if (next != NULL)
      break;
    src++;
  }

  /*
  ** If we reached the end of the string,then the substring was not found.
  */
  if (*src == NUL)
    return FALSE;
  /*
  ** Delete the substring by copying the bytes after it over the bytes of the substring itself
  */
  while (*src++ = *next++)
    ;
  return TRUE;
}