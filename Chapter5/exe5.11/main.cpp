/**
 * Copyright (C)2019 All rights reserved.
 * Author:    Pengfei.Zhou
 * File Name: main.cpp
 */
#include <iostream>

int main() {
  int a_count = 0;
  int e_count = 0;
  int i_count = 0;
  int o_count = 0;
  int u_count = 0;
  int space_count = 0;
  int tab_count = 0;
  int enter_count = 0;
  char input_char;

  while (std::cin.get(input_char)) {
    if (input_char == 'q')
      break;

    switch (input_char) {
      case 'a':
      case 'A':
        ++a_count;
        break;
      case 'e':
      case 'E':
        ++e_count;
        break;
      case 'i':
      case 'I':
        ++i_count;
        break;
      case 'o':
      case 'O':
        ++o_count;
        break;
      case 'u':
      case 'U':
        ++u_count;
        break;
      case ' ':
        ++space_count;
        break;
      case '\t':
        ++tab_count;
        break;
      case '\n':
        ++enter_count;
        break;
    }
  }

  std::cout << "a_count is " << a_count << std::endl;
  std::cout << "e_count is " << e_count << std::endl;
  std::cout << "i_count is " << i_count << std::endl;
  std::cout << "o_count is " << o_count << std::endl;
  std::cout << "u_count is " << u_count << std::endl;
  std::cout << "space_count is " << space_count << std::endl;
  std::cout << "tab_count is " << tab_count << std::endl;
  std::cout << "enter_count is " << enter_count << std::endl;

  return 0;
}
