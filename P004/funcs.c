#include <stdlib.h>
#include <string.h>
#include "funcs.h"

int isPalindrome(int num, int len) {
  int pal = 1;
  char buff[len+1];

  /* convert number to a string */
  snprintf(buff, sizeof(buff), "%d", num);

  /* indices to traverse the string */
  char c1, c2;
  int i = 0;

  /* traverse string and check mirror-ness */
  while (i < len-1-i) {
    c1 = buff[i];
    c2 = buff[len-1-i];
    if (c1 != c2) {
      pal = 0;
      break;
    }
    i++;
  }
  return pal;
}

int nrOfDigs(int num) {
  int digs = 1;
  if (num / 10) {
    digs = 2;
    if (num / 100) {
      digs = 3;
      if (num / 1000) {
        digs = 4;
        if (num / 10000) {
          digs = 5;
          if (num / 100000) {
            digs = 6;
          }
        }
      }
    }
  }
  return digs;
}
