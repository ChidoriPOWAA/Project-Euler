#include "funcs.h"
#include <stdlib.h>
#include <math.h>

int isPrime(int num) {
  int prime = 1;
  double sqNum = sqrt((double)num);

  for (size_t i = 2; i <= sqNum; i++) {
    if (num % i == 0) {
      prime = 0;
      break;
    }
  }
  return prime;
}
