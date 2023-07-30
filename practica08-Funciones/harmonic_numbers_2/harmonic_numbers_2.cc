/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file harmonic_numbers_2.cc
  * @author Marco Napierski alu0101469317@ull.edu.es
  * @date Nov 16 2021
  * @brief A program that reads pairs of numbers n and m 
    with n ≥ m, and for each pair prints Hn − Hm.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P58153
  */
#include <iostream>
#include <iomanip>

// Mensaje que explica lo que hace el programa
void Mensaje() {
  std::cout << "A program that reads pairs of numbers n and m "
    << "with n ≥ m, and for each pair prints Hn − Hm.";
}
// Calcula ármonico entre input1 y input2 (números introducidos)
double HarmonicNumber (int input_1, int input_2) {
  double sum{0};
  for (int i = input_2 + 1; i <= input_1; ++i) {
    sum = sum + (1 / static_cast<double>(i)); // Calcula el armónico entre los números
  } 
  return sum; // Devuelve el sumatorio
}

int main() {
  // Mensaje();
  int number_1;
  int number_2;
  while (std::cin >> number_1) {
    std::cin >> number_2;
    double final_Harmonic = HarmonicNumber(number_1, number_2);
    std::cout << std::setprecision(10) << std::fixed << final_Harmonic << std::endl;
  }
}