#include <iostream>

int main() {
  int v1 = 0;
  int v2 = 0;

  std::cout << "Please input 2 numbers:" << std::endl;

  std::cin >> v1 >> v2;

  std::cout << "The value of " << v1 << " * " \
	    << v2 << " = " << v1 * v2 << std::endl;

  return 0;
}
