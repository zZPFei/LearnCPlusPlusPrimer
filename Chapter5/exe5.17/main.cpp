/**
 * Copyright (C)2019 All rights reserved.
 * Author:    Pengfei.Zhou
 * File Name: main.cpp
 */
#include <iostream>
#include <vector>

int main() {
  std::vector<int> v1;
  std::vector<int> v2;
  int input_value;
  std::string cont;

  std::cout << "Please input v1" << std::endl;
  while (std::cin >> input_value) {
    v1.push_back(input_value);
    std::cout << "Continue?" << std::endl;
    std::cin >> cont;
    if (cont != "y" && cont != "Y") {
      break;
    }
  }

  std::cout << "Please input v2" << std::endl;
  while (std::cin >> input_value) {
    v2.push_back(input_value);
    std::cout << "Continue?" << std::endl;
    std::cin >> cont;
    if (cont != "y" && cont != "Y") {
      break;
    }
  }

  auto it1 = v1.cbegin();
  auto it2 = v2.cbegin();

  while (it1 != v1.cend() && it2 != v2.cend()) {
    if (*it1 != *it2) {
      std::cout << "False" << std::endl;
      break;
    }
    ++it1;
    ++it2;
  }

  if (it1 == v1.cend()) {
    std::cout << "v1 is v2 prex" << std::endl;
  } else {
    std::cout << "v2 is v1 prex" << std::endl;
  }

  return 0;
}
