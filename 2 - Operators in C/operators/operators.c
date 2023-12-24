#include <stdio.h>

int bitwiseAnd(int a, int b) {
  printf("bitwiseAnd(%d, %d): %d \n", a, b, a & b);
  return a & b;
}