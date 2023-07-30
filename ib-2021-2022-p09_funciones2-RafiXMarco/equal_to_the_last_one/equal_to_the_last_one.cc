/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Marco Napierski
 * @date 1.dec.2021
 * @brief Write a program that reads a non-empty sequence of integer numbers, 
 *        and tells how many of them are equal to the last one.
 * @see https://jutge.org/problems/P14130_en
 */

#include <iostream>
#include <vector>

/**
 * @brief Imprime un número del vector y la cantidad de veces que repite
 * @param kvector vector que tiene numeros introducidos
 * @param cantidad la catidad de posiciones del vector
 * @return sumatorio del ultimos número
 */
int CalcularRepeticiones (std::vector<int>kvector, int cantidad) {
  int sum;
  for (int i{0}; i < cantidad; i++) {
    if (kvector[i] == kvector[cantidad - 1]) {
      sum += 1;
    }
  }
  return sum - 1;
}

/** Main function
 *  @param[in] argc NO
 *  @param[in] argv NO
 *  @brief crea y introduce números en un vector
 */
int main() {
  int numero_introducido;
  std::vector<int>kvector;
  int cantidad;
  std::cin >> cantidad;
  for (int i{0}; i < cantidad; i++) { 
    std::cin >> numero_introducido;
    kvector.push_back(numero_introducido);
  }
  std::cout << CalcularRepeticiones(kvector, cantidad) << "\n";
}