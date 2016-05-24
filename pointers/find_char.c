#include "find_char.h"
#include <stdio.h>
#define NULL 0
char *find_char(const char *str, const char *chars) {
  char *cp;
  if (str != NULL && chars != NULL) {
    for (; *str != '\0'; str++) {
      for (cp = chars; *cp != '\0'; cp++) {
        if (*cp == *str)
          return str;
      }
    }
  }
  return NULL;
}