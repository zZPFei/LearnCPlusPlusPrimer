/**
 * Copyright (C)2019 All rights reserved.
 * Author:    Pengfei.Zhou
 * File Name: main.cpp
 */
#include <iostream>
#include <string>

bool HasUpper(const std::string &str) {
  for (auto c : str) {
    if (isupper(c)) {
      return true;
    }
  }

  return false;
}

void ChangeLower(std::string *str) {
  for (auto &c : *str) {
    c = tolower(c);
  }
}

int main() {
  std::cout << "Please input string." << std::endl;

  std::string str;

  std::cin >> str;

  if (HasUpper(str)) {
    ChangeLower(&str);
  }

  std::cout << str << std::endl;

  return 0;
}
