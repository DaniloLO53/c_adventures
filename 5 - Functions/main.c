#include <stdio.h>

void sum2AndModify(int*);

int main() {
  int x = 1;
  sum2AndModify(&x);
  printf("%d \n", x);

  return 0;
}