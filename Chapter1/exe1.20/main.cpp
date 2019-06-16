#include "Sales_item.h"

#include <iostream>

int main() {
  Sales_item book;

  std::cout << "Please input data:" << std::endl;

  while (std::cin >> book) {
    std::cout << "The dada is " << book << std::endl;
  }

  return 0;
}
