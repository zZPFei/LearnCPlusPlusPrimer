/**
 * Copyright (C)2019 All rights reserved.
 * Author:    Pengfei.Zhou
 * File Name: main.cpp
 */
#include <iostream>

int main() {
  int sum = 0;
  int i = 0;

  while (std::cin >> i) {
    sum += i;
  }

  std::cout << "The sum of input is " << sum << std::endl;

  return 0;
}
