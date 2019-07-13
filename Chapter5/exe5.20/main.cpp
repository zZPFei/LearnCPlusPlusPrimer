/**
 * Copyright (C)2019 All rights reserved.
 * Author:    Pengfei.Zhou
 * File Name: main.cpp
 */
#include <iostream>
#include <vector>

int main() {
  std::vector<std::string> v_str;
  std::string cont;
  std::string str;
  bool is_repeat = false;

  while (std::cin >> str) {
    for (auto s : v_str) {
      if (s == str) {
        std::cout << str << " repeat once." << std::endl;
        is_repeat = true;
        break;
      }
    }

    if (is_repeat)
      break;

    v_str.push_back(str);
    std::cout << "Continue?" << std::endl;
    std::cin >> cont;
    if (cont != "Y" && cont != "y") {
      break;
    }
  }

  if (!is_repeat) {
    std::cout << "Don't repeat." << std::endl;
  }

  return 0;
}
