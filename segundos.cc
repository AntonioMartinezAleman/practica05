#include <iostream>

int main() {
  std::cout << "cifra" << std::endl;
  int cifra;
  std::cin >> cifra;
  int horas = cifra / 10000;
  int minutos = cifra % 10000 / 100;
  int segundos = cifra % 100;
  std::cout << horas << ":" << minutos << ":" << segundos << std::endl;
  return 0;
}
