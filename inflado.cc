#include <iostream>

 int main () {
  std::cout << "letra Mayuscula" << std::endl;
  char letra;
  int numero_letra_mayuscula;
  std::cin >> letra;
  numero_letra_mayuscula = static_cast<int>(letra);
  int numero_letra_minuscula;
  numero_letra_minuscula = numero_letra_mayuscula + 32;
  std::cout << char(numero_letra_minuscula) << std::endl;
}
