#include <iostream>

int main () {
  std::cout << "letra Mayuscula" << std::endl;
  char letra;
  int numero_letra_minuscula;
  std::cin >> letra;
  numero_letra_minuscula = static_cast<int>(letra);
  int numero_letra_mayuscula ;
  numero_letra_mayuscula = numero_letra_minuscula - 32;
  std::cout << char(numero_letra_mayuscula) << std::endl;
}
