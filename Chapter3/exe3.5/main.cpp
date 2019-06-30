/**
 * Copyright (C)2018 All rights reserved.
 * Author:    Pengfei.Zhou
 * File Name: main.cpp
 */
#include <iostream>
#include <string>

void CreateStringWOBlank(const std::string& str_in,
                         std::string *result) {
  *result += str_in;
}

void CreateStringWBlank(const std::string& str_in,
                        std::string *result) {
  if ((*result).size() == 0) {
    *result += str_in;
  } else {
    *result += " " + str_in;
  }
}

int main() {
  std::string str;
  std::string str_wo_blank;
  std::string str_w_blank;
  std::string cont;

  std::cout << "Please input:" << std::endl;

  while (std::cin >> str) {
    CreateStringWOBlank(str, &str_wo_blank);
    CreateStringWBlank(str, &str_w_blank);

    std::cout << "Continue?" << std::endl;

    std::cin >> cont;

    if (cont == "y" || cont == "Y") {
      std::cout << "Please input next:" << std::endl;
    } else {
      break;
    }
  }

  std::cout << str_wo_blank << std::endl;
  std::cout << str_w_blank << std::endl;

  return 0;
}
