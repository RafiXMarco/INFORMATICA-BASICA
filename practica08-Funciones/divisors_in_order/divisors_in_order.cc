/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file divisors_in_order.cc
  * @author Marco Napierski alu0101469317@ull.edu.es
  * @date Nov 16 2021
  * @brief A program to print in order all the divisors of a given number.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P39308
  */

#include <iostream>
#include <cmath>

// Mensaje que explica lo que hace el programa
void Mensaje() {
  std::cout << "A program to print in order "
  << "all the divisors of a given number.";
}

// Imprime todos los divisores del número introducido
void Divisors (int valor) {
  int valor_final{0};
  // for de 1 a raiz de n
  for (int i = 1; i <= sqrt(valor); i++) {
    if (valor % i == 0) {
      std::cout << " " << i ; // Imprime divisores menores
      valor_final = i; // Guardo i para el segundo for
    }
  }
  // for de raiz de n a 1
  for (int i{valor_final}; i > 0; i--) {
    if (valor % i == 0 && (valor / i) != i) {
    std::cout << " " << valor / i ; // Imprime divisores mayores
    }
  }
}

int main() {
  // Mensaje();
  int numero;
  while (std::cin >> numero) {
    std::cout << "divisors of " << numero << ":";
    Divisors (numero);
    std::cout << std::endl;
  }
}