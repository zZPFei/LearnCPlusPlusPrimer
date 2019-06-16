#include <iostream>

int main() {
  int v1 = 0;
  int v2 = 0;

  std::cout << "Please input 2 numbers:" << std::endl;

  std::cin >> v1 >> v2;

  std::cout << "The value of ";
  std::cout << v1;
  std::cout << " * ";
  std::cout << v2;
  std::cout << " = ";
  std::cout << v1 * v2 << std::endl;

  return 0;
}
