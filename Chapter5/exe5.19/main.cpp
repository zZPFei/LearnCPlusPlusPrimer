/**
 * Copyright (C)2019 All rights reserved.
 * Author:    Pengfei.Zhou
 * File Name: main.cpp
 */
#include <iostream>

int main() {
  std::string s1;
  std::string s2;
  std::string cont;

  do {
    std::cout << "Please input 2 strings." << std::endl;
    std::cin >> s1;
    std::cout << "Please input another." << std::endl;
    std::cin >> s2;

    if (s1.size() >= s2.size()) {
      std::cout << s2 << std::endl;
    } else {
      std::cout << s1 << std::endl;
    }

    std::cout << "Continue?" << std::endl;
    std::cin >> cont;
    if (cont != "y" && cont != "Y") {
      break;
    }
  } while (1);

  return 0;
}
