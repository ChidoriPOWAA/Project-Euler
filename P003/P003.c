/**********************************************/
/* Project Euler                              */
/* Author: Måns Sterner                       */
/* Title: Largest Prime Factor                */
/* Problem: 3                                 */
/* Comments:                                  */
/**********************************************/

#include <stdio.h>
#include <stdlib.h>
#include "funcs.h"
#include "funcs.c"

int main(int argc, char const *argv[]) {

  long long int num = 600851475143;
  int cnt = 1;

  for (long long int ind = 2; ind <= sqrt(num); ind++) {
    if ((num % ind == 0) && isPrime(ind)) {
      printf("Prime factor nr %d: %d\n", cnt, ind);
      cnt++;
    }
  }

  return 0;
}

// The prime factors of 13195 are 5, 7, 13 and 29.
