/**
 * Copyright (C)2019 All rights reserved.
 * Author:    Pengfei.Zhou
 * File Name: main.cpp
 */
#include <iostream>

int fact(int value) {
  int ret = 1;

  while (value > 1) {
    ret *= value;
    --value;
  }

  return ret;
}

int main() {
  int input_value;
  std::string cont;

  std::cout << "Please input a int value." << std::endl;

  while (std::cin >> input_value) {
    std::cout << fact(input_value) << std::endl;

    std::cout << "Continue?" << std::endl;
    std::cin >> cont;
    if (cont != "y" && cont != "Y") {
      break;
    }
  }

  return 0;
}
