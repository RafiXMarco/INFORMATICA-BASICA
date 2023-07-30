/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file first_position.cc
  * @author Marco Napierski alu0101469317@ull.edu.es
  * @date Nov 16 2021
  * @brief A program that reads a sequence of natural numbers and 
    prints the position of the first even number.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P89078_en
  */

#include <iostream>

// Mensaje que explica lo que hace el programa
void Mensaje() {
  std::cout << "A program that reads a sequence of natural numbers and"
    << "prints the position of the first even number.";
}
// Devuelve la posición del primer número par
int PositionFirstEven() {
  int numero{1};
  int posi{0};
  while(numero % 2 != 0) {
      std::cin >> numero;
      posi = posi + 1; // La variable va sumando hasta que introduzcas un número par
  }
  return posi; // Devuelve la posición del número par
}

int main() {
  // Mensaje();
  std::cout << PositionFirstEven() << "\n";
}