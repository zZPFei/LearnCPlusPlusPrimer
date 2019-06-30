/**
 * Copyright (C)2019 All rights reserved.
 * Author:    Pengfei.Zhou
 * File Name: main.cpp
 */
#include <iostream>
#include <vector>

int main() {
  std::vector<int> int_vec;

  std::string cont;

  int input_number;

  while (std::cin >> input_number) {
    int_vec.push_back(input_number);

    std::cout << "Continue?" << std::endl;

    std::cin >> cont;

    if (cont != "Y" && cont != "y") {
      break;
    }
  }

  for (auto it = int_vec.cbegin(); it != int_vec.cend() - 1; ++it) {
    std::cout << (*it + *(++it)) << std::endl;
  }

  if ((int_vec.size() % 2) != 0) {
    std::cout << *(int_vec.cend() - 1) << std::endl;
  }

  return 0;
}
