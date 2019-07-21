/**
 * Copyright (C)2019 All rights reserved.
 * Author:    Pengfei.Zhou
 * File Name: main.cpp
 */
#include <iostream>
#include <vector>

namespace zpf {

int add(int a, int b) {
  return a + b;
}

int sub(int a, int b) {
  return a - b;
}

int mut(int a, int b) {
  return a * b;
}

int div(int a, int b) {
  if (0 != b) {
    return a / b;
  }

  return 0;
}

}  // namespace zpf

int main() {
  int a, b;

  decltype(zpf::add) *p1 = zpf::add;
  decltype(zpf::add) *p2 = zpf::sub;
  decltype(zpf::add) *p3 = zpf::mut;
  decltype(zpf::add) *p4 = zpf::div;

  std::vector<decltype(zpf::add) *> func_vec = {
    p1, p2, p3, p4
  };

  std::cout << "Please input 2 numbers." << std::endl;

  std::cin >> a >> b;

  for (auto p : func_vec) {
    std::cout << (*p)(a, b) << std::endl;
  }

  return 0;
}

