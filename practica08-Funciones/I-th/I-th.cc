/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file I-th.cc
  * @author Marco Napierski alu0101469317@ull.edu.es
  * @date Nov 16 2021
  * @brief A program that, given an integer number i and 
    a sequence of natural numbers x1, …, xn, prints xi.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P39225
  */

#include <iostream>
#include <vector>

// Mensaje que explica lo que hace el programa
void Mensaje() {
  std::cout << "A program that, given an integer number i and "
    << "a sequence of natural numbers x1, …, xn, prints xi.";
}

int VectorDeNumeros(int posi) {
  std::vector<int>Vector;
  int numero{0};
  while (numero != -1){
    std::cin >> numero;
    Vector.push_back(numero);
  }
  return Vector[posi - 1];
}

int main() {
  // Mensaje();
  int posi;
  std::cin >> posi;
  int numero = VectorDeNumeros(posi);
  std::cout << "At the position " << posi << " there is a(n) " << numero << "." << std::endl;
}