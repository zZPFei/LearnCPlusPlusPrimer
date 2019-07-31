/**
 * Copyright (C)2019 All rights reserved.
 * Author:    Pengfei.Zhou
 * File Name: Screen.cpp
 */
#include "Screen.hpp"

Screen::Screen(pos ht, pos wd)
  : cursor_(0),
    height_(ht),
    width_(wd),
    contents_(ht * wd, ' ') {
}

Screen::Screen(pos ht, pos wd, char c)
  : cursor_(0),
    height_(ht),
    width_(wd),
    contents_(ht * wd, c) {
}
