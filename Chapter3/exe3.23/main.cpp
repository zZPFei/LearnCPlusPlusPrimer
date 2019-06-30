/**
 * Copyright (C)2019 All rights reserved.
 * Author:    Pengfei.Zhou
 * File Name: main.cpp
 */
#include <iostream>
#include <vector>

int main() {
  std::vector<int> int_vec;

  int input_number;

  std::cout << "Please input 10 numbers:" << std::endl;

  for (int i = 0; i != 10; ++i) {
    std::cin >> input_number;
    int_vec.push_back(input_number);
  }

  for (auto it = int_vec.begin(); it != int_vec.end(); ++it) {
    std::cout << (*it)*(*it) << std::endl;
  }

  return 0;
}
