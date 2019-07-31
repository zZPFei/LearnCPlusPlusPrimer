/**
 * Copyright (C)2019 All rights reserved.
 * Author:    Pengfei.Zhou
 * File Name: main.cpp
 */
#include "Screen.hpp"

int main() {
  Screen my_screen(2, 2, 'X');
  my_screen.Display(std::cout);
  my_screen.Move(1, 1).SetChar('Y').Display(std::cout);
  return 0;
}

