/**
 * Copyright (C)2019 All rights reserved.
 * Author:    Pengfei.Zhou
 * File Name: Screen.hpp
 */
#ifndef EXE7_24_SCREEN_HPP_
#define EXE7_24_SCREEN_HPP_
#include <string>
#include <iostream>

class Screen {
 public:
  typedef std::string::size_type pos;
  Screen() = default;
  Screen(pos ht, pos wd);
  Screen(pos ht, pos wd, char c);
  char GetChar() const {
    return contents_[cursor_];
  }
  char GetChar(pos ht, pos wd) const {
    return contents_[ht * width_ + wd];
  }
  Screen &SetChar(char c) {
    contents_[cursor_] = c;
    return *this;
  }
  Screen &SetChar(pos ht, pos wd, char c) {
    contents_[ht * width_ + wd] = c;
    return *this;
  }
  Screen &Move(pos ht, pos wd) {
    cursor_ = ht * width_ + wd;
    return *this;
  }
  void Display(std::ostream &os) const {
    os << contents_ << std::endl;
  }

 private:
  pos cursor_;
  pos height_;
  pos width_;
  std::string contents_;
};

#endif  // EXE7_24_SCREEN_HPP_
