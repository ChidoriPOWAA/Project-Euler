/* Even Fibonacci numbers */

#include <stdio.h>
#include <stdlib.h>
#define LIMIT 4000000

int main(int argc, char const *argv[])
{
  int n1 = 1, n2 = 2;
  int sum = 2, temp;

  do {
    temp = n1 + n2;
    if ((temp % 2 == 0) && temp <= LIMIT) {
      sum += temp;
    }
    n1 = n2;
    n2 = temp;
  } while(temp <= LIMIT);

  printf("The sum of all even numbers in the Fibonacci sequence,"
  " not exceeding four million, is: %d\n", sum);

  return 0;
}
