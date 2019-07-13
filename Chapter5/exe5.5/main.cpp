/**
 * Copyright (C)2019 All rights reserved.
 * Author:    Pengfei.Zhou
 * File Name: main.cpp
 */
#include <iostream>

int main() {
  int grade;
  std::string cont;

  while (std::cin >> grade) {
    if (grade >= 90) {
      std::cout << "A" << std::endl;
    } else if (grade >= 80) {
      std::cout << "B" << std::endl;
    } else if (grade >= 70) {
      std::cout << "C" << std::endl;
    } else if (grade >= 60) {
      std::cout << "D" << std::endl;
    } else {
      std::cout << "E" << std::endl;
    }

    std::cout << "Continue?" << std::endl;

    std::cin >> cont;

    if ((cont != "Y") && (cont != "y")) {
      break;
    }
  }

  return 0;
}
