/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file aproximation_of_e.cc
  * @author Marco Napierski alu0101469317@ull.edu.es
  * @date Nov 16 2021
  * @brief A program that, for every given natural number n, 
    prints the approximation of e that we get 
    by adding the n first terms of the series above.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P11916_en
  */

#include <iostream>
#include <iomanip>

// Mensaje que explica lo que hace el programa
void Mensaje() {
  std::cout << "A program that, for every given natural number n, "
    << "prints the approximation of e that we get "
    << "by adding the n first terms of the series above.";
}

// Calcula el factorial
double Factorial(double interation) {
  double sum{1};
  for (int i{1}; i <= interation; i++){
    sum = sum * i ; // Va multiplicando el resultado por el siguiente número
  }
  return sum; // Devuelve el resultado de n!
}
// Calcula el resultado final llamando la función anterior
double Exponential(double numero_introducido) {
  double sum{0};
    for (int i{0}; i < numero_introducido; i++) {
     sum = 1 / Factorial(i) + sum; // Va sumando la fórmula
    }
   return sum; // Devuelve el sumatorio del bucle anterior
}

int main() {
  // Mensaje();
  double numero_introducido;
  while(std::cin >> numero_introducido){
    // setpresicion para poner la cantidad de dígitos en los dicimales
    std::cout << "With " << std::setprecision(0) << numero_introducido << " term(s) we get ";
    std::cout << std::setprecision(10) << std::fixed << Exponential(numero_introducido) << "." << std::endl;
  }
  return 0;
}