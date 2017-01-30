/**********************************************/
/* Project Euler                              */
/* Author: Måns Sterner                       */
/* Title:                                     */
/* Problem: 8                                 */
/* Comments: 2-byte int & 4-byte long..?      */
/**********************************************/

#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include "funcs.cpp"
using namespace std;

int main(int argc, char const *argv[]) {

  ifstream infile("numbers.txt");
  string oneLine, line;
  /* write each line of 'numbers.txt' into one long string 'oneLine' */
  for (line; getline(infile,line); ) {
    oneLine.append(line);
  }

  long long int max = 0;
  long long int temp;

  for (size_t i = 0; i+13 < 1000; i++) {
    line = oneLine.substr(i,13);
    /* for each consecutive 13 characters, do something */

    if (line == "9478851843858") {
      int a;
    }

    temp = calcString(line);
    if (max < temp) {
      max = temp;
    }

  }

  cout << max << endl;

  return 0;
}
