#include <iostream>

int main () {
  std::cout << "ancho" << std::endl;
  double ancho;
  std::cin >> ancho;
  std::cout << "largo" << std::endl;
  double largo;
  std::cin >> largo;
  std::cout << largo * ancho / 0.6 << " baldosas" << std::endl;
  return 0;
}
