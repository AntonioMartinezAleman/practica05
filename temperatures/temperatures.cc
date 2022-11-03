/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file integer_division_and_reminder.cc
  * @author Antonio Martinez Aleman alu0101548029@ull.edu.es
  * @date Nov 3 2022
  * @brief: Write a program that reads an integer number that represents a temperature given in degree Celsius, and that tells if the weather is hot, if it’s cold, or if it’s ok. Suppose that it’s hot if the temperature is higher than 30 degrees, that it’s cold if the temperature is lower than 10 degrees, and that it’s ok otherwise. Moreover, warn if with the given temperature water would boil, or if water would freeze. Assume that water boils at 100 or more degrees, and that water freezes at 0 or less degrees.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P15613
  */

#include <iostream>

int main() {

    int temperature{0};
    std::cin >> temperature;
    if (temperature > 30) {
        if (temperature >= 100) {
            std::cout << "it's hot\water would boil" << std::endl;
            return 0;
        }
        std::cout << "it's hot" << std::endl;
        return 0;
    }
    else if (temperature < 10) {
        if (temperature <= 0) {
            std::cout << "it's cold\water would freeze" << std::endl;
            return 0;
        }
        std::cout << "it's cold" << std::endl;
        return 0;
    }
    else {
        std::cout << "it's ok" << std::endl;
    }
    return 0;
}
