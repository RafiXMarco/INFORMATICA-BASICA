/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file triangle.cc
  * @author alu0101469317@ull.edu.es  -  Marco Napierski
  * @date 11 Nov 2021
  * @brief It is a program that, given a number n, prints a “triangle of size n”.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P29973
*/
#include <iostream>

void Mensaje() {
  std::cout << "It is a program that, given a number n, prints a “triangle of size n”.";
}

int CreaEstreallas(int longitud) {
  for( int i{1}; i < longitud +1 ; i++) {
    for( int j{0}; j < i; j++) {
      std::cout << "*";
    }
    std::cout << "\n";
  }
  return 0;
}

int main() {
  // Mensaje();
  int num1;
  std::cin >> num1;
  CreaEstreallas(num1);
}