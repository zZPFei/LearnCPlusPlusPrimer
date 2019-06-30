/**
 * Copyright (C)2019 All rights reserved.
 * Author:    Pengfei.Zhou
 * File Name: main.cpp
 */
#include <iostream>
#include <string>

int main() {
  std::string v1;

  while (std::cin >> v1) {
    for (char &c : v1) {
      c = 'X';
    }
    std::cout << v1 << std::endl;
  }

  return 0;
}
