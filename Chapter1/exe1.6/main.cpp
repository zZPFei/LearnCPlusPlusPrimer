/**
 * Copyright (C)2019 All rights reserved.
 * Author:    Pengfei.Zhou
 * File Name: main.cpp
 */
#include <iostream>

int main() {
  int v1 = 0;
  int v2 = 0;

  std::cout << "Please input 2 numbers:" << std::endl;

  std::cin >> v1 >> v2;

  std::cout << "The sum of " << v1 \
    << " and " << v2
    << " is " << v1 + v2 << std::endl;

  return 0;
}
