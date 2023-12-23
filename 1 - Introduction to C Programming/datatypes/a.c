#include <stdio.h>
#include <limits.h>

// int main() {
//   long int intMin = INT_MIN, intMax = INT_MAX;
//   unsigned int uintMin = 0, uintMax = UINT_MAX;
//   short int shrtMin = SHRT_MIN, shrtMax = SHRT_MAX;
//   short unsigned int ushrtMin = 0, ushrtMax = USHRT_MAX;

//   int exceededInt = 2147483647;
//   int exceededUint = 4294967296;

//   printf("Range of signed int: [%ld, %ld]\n", intMin, intMax);
//   printf("Range of unsigned int: [%u, %u]\n", uintMin, uintMax);
//   printf("Range of shrt int: [%d, %d]\n", shrtMin, shrtMax);
//   printf("Range of unsigned shrt int: [%u, %u]\n", ushrtMin, ushrtMax);

//   printf("Exceeded Int: %d\n", exceededUint);

//   return 0;
// }

int main() {
  char c = 255;
  c += 10;
  printf("%d", c);
  return 0;
}