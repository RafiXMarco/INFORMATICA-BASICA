/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file primality.cc
  * @author Marco Napierski alu0101469317@ull.edu.es
  * @date Nov 16 2021
  * @brief Write a program that reads a sequence of natural numbers and, 
    for each one, tells if it is a prime number or not. Remember that a 
    natural number is prime if and only if it is greater than 1 and 
    it does not have any positive divisor other than 1 and itself.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P48713
  */
#include <iostream>

// Mensaje que explica lo que hace el programa
void Mensaje() {
  std::cout << "Write a program that reads a sequence of natural numbers and, "
    << "for each one, tells if it is a prime number or not. Remember that a "
    << "natural number is prime if and only if it is greater than 1 and "
    << "it does not have any positive divisor other than 1 and itself.";
}
// Comprueba si es primo o no
bool Primo(int numer_introducido) {
  int numero_cambiante = 2;
  if (numer_introducido == 1) {
  return false; // Caso especial del 1 que es no primo
  }
  while (numero_cambiante * numero_cambiante <= numer_introducido) {
    if (numer_introducido % numero_cambiante == 0) {
        return false; // Devuelve falso de Primo desde que encuentra un divisor
    } 
    numero_cambiante += 1; // Sumando 1 para comprobar el siguiente
  } return true; // Devuelve true de Primo si no encuentra divisor
}

int main() {
  // Mensaje();
  int cantidad;
  int numero;
  std::cin >> cantidad;
  for (int i = 0; i < cantidad; i++) {
    std::cin >> numero;
    if(numero > 0) {
      // Números mayores que 0 son primos o no
      if (Primo(numero) == 1) {
        std::cout << numero << " is prime" << std::endl;
      } else {
        std::cout << numero <<" is not prime" << std::endl;
      }
    } else {
      // Números menores o igual que 0 nunca son primos
      std::cout << numero <<" is not prime" << std::endl;
    }
  }
  return 0;
}