/**
 * Copyright (C)2019 All rights reserved.
 * Author:    Pengfei.Zhou
 * File Name: main.cpp
 */
#include <iostream>
#include <vector>

int main() {
  int in_i;

  std::vector<int> i_vec;

  std::string cont;

  while (std::cin >> in_i) {
    i_vec.push_back(in_i);

    std::cout << "Continue?" << std::endl;

    std::cin >> cont;

    if ((cont != "y") && (cont != "Y")) {
      break;
    }
  }

  for (decltype(i_vec.size()) i = 0; i != i_vec.size()-1; i+=2) {
    std::cout << i_vec[i] + i_vec[i+1] << std::endl;
  }

  if (i_vec.size()%2 != 0) {
    std::cout << i_vec[i_vec.size() - 1] << std::endl;
  }

  return 0;
}
