/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Marco Napierski
 * @date 1.dec.2021
 * @brief In this exercise, we say that a natural number is 
 *        balanced if the sum of the digits in even positions 
 *        is equal to the sum of the digits in odd positions. 
 *        For instance, 1463 and 48015 are balanced numbers.
 *        Write a function that tells if a natural number n is balanced or not.
 * @see https://jutge.org/problems/P26492_en
 */

#include <iostream>
#include <vector>
#include <algorithm>

/**
 * @brief comprueba si es balanced o no
 * @param numero introducido por el usuario
 * @return true: si los sumatorios son igual 
 *         false: si los sumatorio no son iguales  
 */
bool is_balanced(int numero_introducido) {
  int sum_even{0},sum_odd{0};
  std::vector<int>numeros;
  while (numero_introducido > 0) {
    numeros.push_back(numero_introducido % 10);
    numero_introducido = numero_introducido / 10;
  }
  std::reverse(numeros.begin(), numeros.end());
  for (long unsigned int i{0}; i < numeros.size(); i = i + 2) {
    sum_odd = sum_odd + numeros[i];
  }
  for (long unsigned int i{1}; i < numeros.size(); i = i + 2) {
    sum_even = sum_even + numeros[i];
  }
  return sum_odd == sum_even;
}

/** Main function
 *  @param[in] argc NO
 *  @param[in] argv NO
 *  @brief Imprime si los sumatorios son iguales
 */
int main() {
  int num_introducido;
  std::cin >> num_introducido;
  std::cout << is_balanced(num_introducido) << "\n";
}