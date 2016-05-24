#include <stdio.h>
#include <string.h>

#define TRUE 1
#define FALSE 0
#define MAX_LEN 128

int main() {
  char prev_str[MAX_LEN];
  char input_str[MAX_LEN];
  int printed_from_group = FALSE;
  if (gets(prev_str) != NULL) {
    while (gets(input_str) != NULL) {
      if (strcmp(input_str, prev_str) != 0) {
        printed_from_group = FALSE;
        strcpy(prev_str, input_str);
      } else if (!printed_from_group) {
        printed_from_group = TRUE;
        printf("Duplicated:%s\n", input_str);
      }
    }
  }
  return 0;
}