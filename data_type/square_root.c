#include <stdio.h>
#include <stdlib.h>

int main() {
  float new_guess;
  float last_guess;
  float num;

  printf("Input a number:");
  scanf("%f", &num);

  if (num > 0) {
    new_guess = 1;
    do {
      last_guess = new_guess;
      new_guess = (last_guess + num / last_guess) / 2;
      printf("%.15e\n", new_guess);
    } while (last_guess != new_guess);

    printf("Square root of %f is %f\n", num, new_guess);

  } else {
    printf("A number lower than 0 doesn't have a square root\n");
    exit(1);
  }

  return 0;
}