#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include "funcs.h"

long long int calcString(string line) {
  long long int tot = 1;

  for (size_t i = 0; i < 13; i++) {
    tot *= std::stol(line.substr(i,1));
  }
  return tot;
}
