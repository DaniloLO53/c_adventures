#include <stdio.h>
#include <stdlib.h>
#include "operators.h"

void add5AndIncrement() {
  static int var1; // stored at .bss
  static int var2; // stored at .bss
  int five = 5;

  int res1 = var1++ + five; // first use, then incr
  int res2 = ++var2 + five; // first incr, then use

  printf("Post increment: %d \n", res1);
  printf("Pre increment: %d \n", res2);
}

int main() {
  // add5AndIncrement();
  // printf("external: %d \n", external);
  bitwiseAnd(7, 4);
  return 0;
}
