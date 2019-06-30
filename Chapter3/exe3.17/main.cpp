/**
 * Copyright (C)2019 All rights reserved.
 * Author:    Pengfei.Zhou
 * File Name: main.cpp
 */
#include <iostream>
#include <string>
#include <vector>

int main() {
  std::vector<std::string> str_vec;

  std::string in_str;

  std::string cont;

  while (std::cin >> in_str) {
    str_vec.push_back(in_str);

    std::cout << "Continue?" << std::endl;

    std::cin >> cont;

    if ((cont != "Y") && (cont != "y")) {
      break;
    }
  }

  for (auto &str : str_vec) {
    for (auto &c : str) {
      c = toupper(c);
    }
    std::cout << str << std::endl;
  }

  return 0;
}
