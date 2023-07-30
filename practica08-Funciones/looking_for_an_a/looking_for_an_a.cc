/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file looking_for_an_a.cc
  * @author Marco Napierski alu0101469317@ull.edu.es
  * @date Nov 16 2021
  * @brief A program that reads a sequence of characters ended in a dot and
    tells if the sequence has any lowercase ‘a’ or not.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P75149
  */

#include <iostream>

// Mensaje que explica lo que hace el programa
void Mensaje() {
  std::cout << "A program that reads a sequence of characters ended in a dot and"
    << "tells if the sequence has any lowercase ‘a’ or not.";
}

// Cuenta la cantidad de "a" que hay hasta llegar al punto o "."
bool HayUnaA() {
  char caracter;
  while (caracter != '.') { // Hasta llegar al punto o "."
    std::cin.get(caracter);
    if (caracter == 'a') {
      return true; // Si encuentra uno develve true
    }
  }
  return false; // Si no encuentra uno devuelve false
}

int main() {
  // Mensaje();
  if (HayUnaA() == true) {
    std::cout << "yes" << std::endl; // En caso de que si hay una "a"
  } else {
    std::cout << "no" << std::endl; // En caso de que no hay una "a"
  }
}



