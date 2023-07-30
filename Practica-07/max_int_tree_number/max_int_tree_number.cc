/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file max_int_tree_number.cc
  * @author alu0101469317@ull.edu.es  -  Marco Napierski
  * @date 11 Nov 2021
  * @brief It is a program that reads three numbers and prints their maximum.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P90615
*/
#include <iostream>

void Mensaje() {
  std::cout << "It is a program that reads three numbers and prints their maximum. ";
}

int max;
int NumeroMayor(int number_one, int number_two, int number_three) { 
  max = number_one;
  if (number_two > max) {
    max = number_two;
  }
  if (number_three > max) {
    max = number_three;
  }
  return max;
}

int main() {
  // Mensaje();
  int number_one, number_two, number_three;
  std::cin >> number_one; std::cin >> number_two; std::cin >> number_three;
  NumeroMayor(number_one, number_two, number_three);
  std::cout << max << "\n";
}