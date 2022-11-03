#include <iostream>

int main () {
  std::cout << "huevos" << std::endl;
  int huevos;
  std::cin >> huevos;
  int cajas;
  cajas = huevos / 6;
  if (huevos % 6 > 0) {
    cajas = cajas + 1;
  }
  std::cout << cajas << " cajas" << std::endl;
  return 0;
}
