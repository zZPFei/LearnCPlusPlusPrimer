/**
 * Copyright (C)2019 All rights reserved.
 * Author:    Pengfei.Zhou
 * File Name: main.cpp
 */
#include <iostream>
#include <string>

int main() {
  std::string s1;

  while (getline(std::cin, s1)) {
    for (auto c : s1) {
      if (!ispunct(c) && !isspace(c))
        std::cout << c;
    }
    std::cout << std::endl;
  }

  return 0;
}
