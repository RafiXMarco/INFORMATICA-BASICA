/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file counting_a.cc
  * @author alu0101469317@ull.edu.es  -  Marco Napierski
  * @date 11 Nov 2021
  * @brief It is a program that reads a sequence of characters ended 
  * with a period and prints the number of letters ‘a’ in the sequence..
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P97969
*/
#include <iostream>

void Mensaje() {
  std::cout << "It is a program that reads a sequence of characters ended "
  << "with a period and prints the number of letters ‘a’ in the sequence..";
}

int Count(){
  char caracter;
  int sum{0};
  while (caracter != '.') {
    std::cin.get(caracter);
    if (caracter == 'a') {
      sum += 1;
    }
  }
  return sum;
}

int main() {
  // Mensaje();
  std::cout << Count() << "\n";
}