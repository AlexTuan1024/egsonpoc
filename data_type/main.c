#include "data.h"
#include <stdio.h>
int main() {
  extern int firestorm;
  printf("Main:%d\n", firestorm);
  extern void display(int*);
  display(&firestorm);
  return 0;
}