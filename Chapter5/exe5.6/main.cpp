/**
 * Copyright (C)2019 All rights reserved.
 * Author:    Pengfei.Zhou
 * File Name: main.cpp
 */
#include <iostream>

int main() {
  int grade;

  while (std::cin >> grade) {
    std::cout << ((grade >= 90) ? "A" :
                 (grade >= 80) ? "B" :
                 (grade >= 70) ? "C" :
                 (grade >= 60) ? "D" : "E") << std::endl;
  }

  return 0;
}
