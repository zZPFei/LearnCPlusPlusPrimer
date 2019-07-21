/**
 * Copyright (C)2019 All rights reserved.
 * Author:    Pengfei.Zhou
 * File Name: main.cpp
 */
#include <iostream>

void swap(int *a, int *b) {
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}

int main() {
  std::cout << "Please input 2 numbers." << std::endl;

  int a, b;

  std::cin >> a >> b;

  std::cout << a << " " << b << std::endl;

  swap(&a, &b);

  std::cout << a << " " << b << std::endl;

  return 0;
}
