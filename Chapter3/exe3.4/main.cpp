/**
 * Copyright (C)2019 All rights reserved.
 * Author:    Pengfei.Zhou
 * File Name: main.cpp
 */
#include <iostream>
#include <string>

void CompareString(const std::string& s1,
                   const std::string& s2) {
  if (s1 > s2) {
    std::cout << s1 << std::endl;
  } else if (s1 < s2) {
    std::cout << s2 << std::endl;
  } else {
    std::cout << "Same string." << std::endl;
  }
}

void CompareStringSize(const std::string& s1,
                       const std::string& s2) {
  if (s1.size() > s2.size()) {
    std::cout << s1.size() << std::endl;
  } else if (s1.size() < s2.size()) {
    std::cout << s2.size() << std::endl;
  } else {
    std::cout << "Same length." << std::endl;
  }
}

int main() {
  std::string s1, s2;

  std::cout << "Please input 2 strings:" << std::endl;

  std::cin >> s1 >> s2;

  CompareString(s1, s2);

  CompareStringSize(s1, s2);

  return 0;
}
