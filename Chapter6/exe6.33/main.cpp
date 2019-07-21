/**
 * Copyright (C)2019 All rights reserved.
 * Author:    Pengfei.Zhou
 * File Name: main.cpp
 */
#include <iostream>
#include <vector>

void print(std::vector<int> i_vec, int index) {
  if (index != i_vec.size()) {
    std::cout << i_vec[index] << std::endl;
    print(i_vec, ++index);
  }
}

int main() {
  std::vector<int> i1 = {0, 1, 2, 3};

  print(i1, 0);

  return 0;
}
