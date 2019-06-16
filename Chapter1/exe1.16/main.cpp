#include <iostream>

int main() {
  int sum = 0;
  int i = 0;

  while (std::cin >> i) {
    sum += i;
  }

  std::cout << "The sum of input is " << sum << std::endl;

  return 0;
}
