#include "Sales_item.h"

#include <iostream>

int main() {
  Sales_item trans_1;
  Sales_item trans_2;

  std::cout << "Please input data:" << std::endl;

  if (std::cin >> trans_1) {
    int counts = 1;

    while (std::cin >> trans_2) {
      if (trans_1.isbn() == trans_2.isbn()) {
        ++counts;      
      } else {
        std::cout << counts << std::endl;
	counts = 1;
	trans_1 = trans_2;
      }
    }
  } else {
    std::cout << "Input wrong data." << std::endl;
    return -1;
  }

  return 0;
}
