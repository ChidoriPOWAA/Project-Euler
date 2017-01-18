#include <stdlib.h>
#include "funcs.h"

int multiThree(int number) {
  int isDiv = 0;
  if (number % 3 == 0)
    isDiv = 1;
  return isDiv;
}

int multiFive(int number) {
  int isDiv = 0;
  if (number % 5 == 0)
    isDiv = 1;
  return isDiv;
}

int sumOfDivs(int Limit) {
  int sum = 0;

  for (int i = 3; i < Limit; ++i)
  {
    if (multiThree(i) || multiFive(i))
      sum += i;
  }
  return sum;
}