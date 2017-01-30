/**********************************************/
/* Project Euler                              */
/* Author: Måns Sterner                       */
/* Title:                                     */
/* Problem:                                   */
/* Comments:                                  */
/**********************************************/

#include <stdio.h>
#include <stdlib.h>
#include "../P003/funcs.c"

int main(int argc, char const *argv[]) {

  int num = 13;
  int nrOfPrimes = 5;

  while (nrOfPrimes <= 10001) {
    if (isPrime(num)) {
      nrOfPrimes++;
      if (nrOfPrimes == 10001) {
        printf("%d\n", num);
      }
    }
    num += 2;
  }

  return 0;
}
