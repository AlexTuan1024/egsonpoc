#include <stdio.h>

void isTriangle(float sa, float sb, float sc) {
  if (sa > 0 && sb > 0 && sc > 0) {
    if (sa + sb > sc && sa + sc > sb && sb + sc > sa) {
      if (sa == sb || sb == sc || sa == sc) {
        if (sa == sb && sb == sc) {
          printf("Equilateral.\n");
        } else
          printf("Isosceles.\n");
      } else {
        printf("A Normal one.\n");
      }
    } else
      printf("Not a triangle.\n");
  } else {
    printf("Not a damn thing.\n");
  }
}
int main() {
  float a, b, c;
  printf("Enter the sides' length of triangle:");
  scanf("%f %f %f", &a, &b, &c);
  isTriangle(a, b, c);
  return 0;
}