#include <stdio.h>
#include <stdlib.h>

int isPrime(int num) {
  int i = 2;
  if (num > 1) {
    for (; i < num; ++i) {
      if (num % i == 0) {
        return 0;
      }
    }
    return 1;
  } else {
    printf("The smallest prime number is 2\n");
    exit(1);
  }
}
int main() {
  int number = 2;
  for (; number <= 100; ++number) {
    if (isPrime(number))
      printf("%d ", number);
  }
  printf("\n");
  return 0;
}