/**
 * Copyright (C)2019 All rights reserved.
 * Author:    Pengfei.Zhou
 * File Name: main.cpp
 */
#include <iostream>

int main() {
  int arr[10];

  for (int i = 0; i < 10; ++i) {
    arr[i] = i;
    std::cout << arr[i] << std::endl;
  }

  return 0;
}
