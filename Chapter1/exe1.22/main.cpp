#include "Sales_item.h"

#include <iostream>

int main() {
  Sales_item total;

  std::cout << "Please input data:" << std::endl;

  if (std::cin >> total) {
    Sales_item trans;

    while (std::cin >> trans) {
      if (total.isbn() == trans.isbn()) {
        total += trans;
      } else {
      	std::cout << total << std::endl;
	return -1;
      }
    }

    std::cout << total << std::endl;
  } else {
    std::cout << "Input wrong data." << std::endl;
    return -1;
  }

  return 0;
}
