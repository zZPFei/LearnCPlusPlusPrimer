/**
 * Copyright (C)2019 All rights reserved.
 * Author:    Pengfei.Zhou
 * File Name: main.cpp
 */
#include <iostream>
#include <vector>

int main() {
  int value;
  std::vector<int> v1;
  std::string s;

  std::cout << "Please input numbers:" << std::endl;

  while (std::cin >> value) {
    v1.push_back(value);

    std::cout << "Continue?" << std::endl;

    std::cin >> s;

    if ((s != "y") && (s != "Y")) {
      break;
    }
  }

  for (auto i : v1) {
    std::cout << i << std::endl;
  }

  return 0;
}
