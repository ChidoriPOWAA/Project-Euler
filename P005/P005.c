/**********************************************/
/* Project Euler                              */
/* Author: Måns Sterner                       */
/* Title: Smallest multiple                   */
/* Problem: 5                                 */
/* Comments:                                  */
/**********************************************/

#include <stdio.h>
#include <stdlib.h>
// #include "funcs.c"

int main(int argc, char const *argv[]) {

  int cnt = 0;
  int ind = 1;
  int lim = 20;
  int num = 2520;

  while (cnt < lim) {
    if (num % ind == 0) {
      cnt++;
      ind++;
    } else {
      cnt = 0;
      ind = 1;
      num++;
    }
  }

  printf("%d\n", num);

  return 0;
}

// 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
