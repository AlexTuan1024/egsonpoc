#include <float.h>
#include <stdio.h>
static double income_limits[] = {0, 23350, 56550, 117950, 256500, DBL_MAX};
static float base_tax[] = {0, 3502.5, 12798.5, 31832.5, 81710.5};
static float percentage[] = {0.15, 0.28, 0.31, 0.36, 0.396};
float single_tax(double income) {
  int category;
  for (category = 1; income > income_limits[category]; category++)
    ;
  category -= 1;
}