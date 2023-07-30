/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Marco Napierski
 * @date 1.dec.2021
 * @brief Write a program that reads sequences of 
 *        integer numbers and prints the maximum value of each sequence.
 * @see https://jutge.org/problems/P71753_en
 */

#include <iostream>

/**
 * @brief Pide una secuencia e imprime el mayor número.
 */
void MaxSecuencia() {
  int cantidad,numero_introducido,mayor,primera_vez{1};
  while (std::cin >> cantidad) {
    for (int i{0}; i < cantidad; i++) {
      std::cin >> numero_introducido;
      if (primera_vez == 1) {
        mayor = numero_introducido;
        primera_vez = 0;
      } else if (numero_introducido > mayor) {
          mayor = numero_introducido;
      }
    }
    std::cout << mayor << "\n";
    primera_vez = 1;
  }
}

/** Main function
 *  @param[in] argc NO
 *  @param[in] argv NO
 *  @brief hace la función MaxSecuencia.
 */
int main() {
  MaxSecuencia();
}