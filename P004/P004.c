/**********************************************/
/* Project Euler                              */
/* Author: Måns Sterner                       */
/* Title: Largest Palindrome Product          */
/* Problem: 4                                 */
/* Comments:                                  */
/**********************************************/

#include <stdio.h>
#include <stdlib.h>
#include "funcs.c"

int main(int argc, char const *argv[]) {

  int pal = 100001;
  int digs;

  /* brute force algorithm */
  for (size_t i = 100; i <= 999; i++) {
    for (size_t j = 100; j <= 999; j++) {
      digs = nrOfDigs(i*j);
      if (isPalindrome(i*j, digs) && i*j > pal) {
        pal = i*j;
      }
    }
  }

  printf("Largest Palindrome of a %d-digit number is: %d\n", digs, pal);

  return 0;
}
