/**
 * Copyright (C)2019 All rights reserved.
 * Author:    Pengfei.Zhou
 * File Name: main.cpp
 */
#include "Sales_item.h"

#include <iostream>

int main() {
  Sales_item book1;
  Sales_item book2;

  std::cout << "Please input 2 datas:" << std::endl;

  std::cin >> book1 >> book2;

  if (book1.isbn() == book2.isbn()) {
    std::cout << "The sum of 2 datas is "
      << book1 + book2 << std::endl;
  } else {
    std::cout << "Input wrong data." << std::endl;
  }

  return 0;
}
