/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file three_words.cc
  * @author Marco Napierski alu0101469317@ull.edu.es
  * @date Nov 16 2021
  * @brief A program that reads three words a, b and c, 
    and prints a line with c, b and a in this order.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P62421_en
  */
#include <iostream>

// Mensaje que explica lo que hace el programa
void Mensaje() {
  std::cout << "A program that reads three words a, b and c, "
    << "and prints a line with c, b and a in this order.";
}
// Imprime de forma inversa a la que se introduce
void Reverse (std::string valor_1, std::string valor_2, std::string valor_3) {
std::cout << valor_3 << " " << valor_2 << " " << valor_1 << std::endl;
}

int main() {
  // Mensaje();
  std::string word_1, word_2, word_3;
  std::cin >> word_1 >> word_2 >> word_3;
  Reverse (word_1, word_2, word_3);
  return 0;
}