/**
 * Copyright (C)2019 All rights reserved.
 * Author:    Pengfei.Zhou
 * File Name: main.cpp
 */
#include <iostream>

int main() {
  int sum = 0;
  int i = 50;

  while (i != 101) {
    sum += i;
    ++i;
  }

  std::cout << "The sum of 50 to 100 is " << sum << std::endl;

  return 0;
}

