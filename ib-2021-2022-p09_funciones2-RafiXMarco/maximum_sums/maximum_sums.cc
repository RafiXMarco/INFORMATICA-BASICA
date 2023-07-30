/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Marco Napierski
 * @date 1.dec.2021
 * @brief Write a program that reads a sequence of numbers, 
 *        and prints the maximum quantity that can be obtained 
 *        by adding numbers consecutively from the beginning, 
 *        and the maximum quantity that can be obtained by adding 
 *        numbers consecutively from the end.
 * @see https://jutge.org/problems/P20262_en
 */

#include <iostream>
#include <vector>

/**
 * @brief Pide una secuencia de numeros e imprime el mayor sumatorio, 
 *        tanto por la deracha que por la izquierda.
 * @param cantidad de numeros a introducir
 */
void MaxSumInitials() {
  int cantidad;
  while (std::cin >> cantidad) {
    std::vector<int>numeros(cantidad);
    int max{0},sum{0};
    for (int i{0}; i < cantidad; i++) {
      std::cin >> numeros[i];
      sum = sum + numeros[i];
      if (sum > max)
      max = sum;
    }
    std::cout << max << " ";
    max = 0;
    sum = 0;
    for (int i{cantidad - 1}; i >= 0; i--) {
      sum = sum + numeros[i];
      if (sum > max)
      max = sum;
    }
    std::cout << max << "\n";
  }
}

/** Main function
 *  @param[in] argc NO
 *  @param[in] argv NO
 *  @brief hace la función MaxSumInitials.
 */
int main() {
  MaxSumInitials();
} 