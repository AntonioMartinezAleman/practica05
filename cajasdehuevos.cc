#include <iostream>

int main () {
  std::cout << "huevos" << std::endl;
  int huevos;
  std::cin >> huevos;
  std::cout << huevos / 6 << " cajas ";
  std::cout << huevos % 6 << " huevos que sobran" << std::endl;
  return 0;
}
