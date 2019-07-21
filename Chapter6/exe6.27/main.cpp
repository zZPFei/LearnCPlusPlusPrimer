/**
 * Copyright (C)2019 All rights reserved.
 * Author:    Pengfei.Zhou
 * File Name: main.cpp
 */
#include <iostream>

int sum(std::initializer_list<int> il) {
  int sum = 0;

  for (auto i : il) {
    sum += i;
  }

  return sum;
}

int main() {
  std::cout << sum({4, 5, 6, 7}) << std::endl;

  return 0;
}
