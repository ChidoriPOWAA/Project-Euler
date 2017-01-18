/* Multiples of 3 and 5 */

#include <stdio.h>
#include <stdlib.h>
#include "funcs.h"
#include "funcs.c"

int main(int argc, char const *argv[])
{
  int Limit = 1000;

  printf("Finding the multiples of 3 and 5..\n");

  printf("Calculating sum..\n");

  printf("..\n");

  printf("\nThe sum of all multiples of 3 and 5 below %i is: %i.\n", Limit, sumOfDivs(Limit));

  return 0;
}