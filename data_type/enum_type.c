#include <stdio.h>

int main() {
  enum Jar_Type { CUP = 8, PINT = 16, HALF_GALLON = 64 };
  enum Jar_Type milk_jug, gas_can, medicine_bottle;
  milk_jug = CUP;
  gas_can = HALF_GALLON;
  medicine_bottle = PINT;

  printf("%i,%i,%i\n", milk_jug, gas_can, medicine_bottle);
  return 0;
}