/**
 * Copyright (C)2019 All rights reserved.
 * Author:    Pengfei.Zhou
 * File Name: main.cpp
 */
#include <iostream>
#include <string>

void DoWhile(const std::string &s) {
  std::string tmp = s;

  int i = 0;
  while (i != s.size()) {
    tmp[i] = 'X';
    ++i;
  }
  std::cout << tmp << std::endl;
}

void DoFor(const std::string &s) {
  std::string tmp = s;

  for (int i =0; i != s.size(); ++i) {
    tmp[i] = 'X';
  }
  std::cout << tmp << std::endl;
}

int main() {
  std::string v1;

  while (std::cin >> v1) {
    DoWhile(v1);
    DoFor(v1);
  }

  return 0;
}
