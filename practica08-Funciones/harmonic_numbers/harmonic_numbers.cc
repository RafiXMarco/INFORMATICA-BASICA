/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file harmonic_numbers.cc
  * @author Marco Napierski alu0101469317@ull.edu.es
  * @date Nov 16 2021
  * @brief A program that reads a number n and prints the n-th harmonic number, 
    defined as Hn = 1/1 + 1/2 + ⋯ + 1/n.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P59539
  */

#include <iostream>
#include <iomanip>

// Mensaje que explica lo que hace el programa
void Mensaje() {
  std::cout << "A program that reads a number n and prints the n-th harmonic number, "
    << "defined as Hn = 1/1 + 1/2 + ⋯ + 1/n.";
}
// Calcula el número armónico
double HarmonicNumber (int valor) {
  double sumatorio;
  for (int i = 1; i < valor + 1; i++) {
    sumatorio = sumatorio + 1 / static_cast<double>(i); // Voy sumando la formula
  } return sumatorio; // Devuelve el sumatorio de los armónicos
}

int main() {
  // Mensaje();
  int numero;
  std::cin >> numero;
  // Imprimo el resultado de la función + lo limito a 4 dígitos despues del punto
  std::cout << std::setprecision(4) << std::fixed << HarmonicNumber(numero) << std::endl;
}