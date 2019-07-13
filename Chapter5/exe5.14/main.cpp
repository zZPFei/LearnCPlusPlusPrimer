/**
 * Copyright (C)2019 All rights reserved.
 * Author:    Pengfei.Zhou
 * File Name: main.cpp
 */
#include <iostream>

int main() {
  std::string cur_string;
  std::string pre_string;
  std::string max_string;

  int max_count = 0;
  int cur_count = 0;

  while (std::cin >> cur_string) {
    if (cur_string == "quit")
      break;
    if (cur_string == pre_string) {
      ++cur_count;

      if (cur_count > max_count) {
        max_count = cur_count;
        max_string = cur_string;
      }
    } else {
      cur_count = 1;
      pre_string = cur_string;
    }
  }

  if (max_count > 1) {
    std::cout << "The most string is " << max_string
              << " and the count is " << max_count << std::endl;
  } else {
    std::cout << "The count of each is one" << std::endl;
  }

  return 0;
}
