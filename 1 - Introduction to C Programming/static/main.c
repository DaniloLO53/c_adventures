#include <stdio.h>
#include <stdlib.h>

extern int increment();

int main() {
  int value;
  value = increment();
  value = increment();
  value = increment();

  printf("%d", value);

  return 0;
}