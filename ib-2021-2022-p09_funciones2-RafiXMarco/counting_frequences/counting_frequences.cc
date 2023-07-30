/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Marco Napierski
 * @date 1.dec.2021
 * @brief Write a program that reads a sequence of natural 
 *        numbers and that prints, for each one, how many times it appears.
 * @see https://jutge.org/problems/P63414_en
 */

#include <iostream>
#include <vector>
#include <algorithm>

/**
 * @brief Imprime un número del vector y la cantidad de veces que repite
 * @param numeros vector que tiene numeros introducidos
 * @param cantidad la catidad de posiciones del vector
 */
void CountFrequence(std::vector<int>numeros, int cantidad) {
  std::sort (numeros.begin(), numeros.end());
  int sum{0};
  for (int i{0}; i < cantidad; i++) {
    if (numeros[i] == numeros[i + 1]) {
      sum = sum + 1;
    } else {
      std::cout << numeros[i] << " : " << sum + 1 << "\n";
      sum = 0;
    }
  }
}

/** Main function
 *  @param[in] argc NO
 *  @param[in] argv NO
 *  @brief crea y introduce números en un vector
 */
int main() {
  int cantidad;
  int introducido;
  std::cin >> cantidad;
  std::vector<int>numeros;
  for (int i{0}; i < cantidad; i++) {
    std::cin >> introducido;
    numeros.push_back(introducido);
  }
  CountFrequence(numeros, cantidad);
}

