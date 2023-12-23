#include <stdio.h>

// int ext = 5;
// extern int ext; // declare it but not define it.
// // it tells to the compiler we will probally use this variable
// // but it doesnt allocate any memory to this variable.
// // this is good for reusability, since we can access this variable
// // from another file

int main() {
  extern int ext;
  printf("%d", ext);

  return 0;
}