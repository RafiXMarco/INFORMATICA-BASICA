/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Marco Napierski
 * @date 1.dec.2021
 * @brief Write a program that reads sequences of natural numbers, 
 *        and that for each one prints the number of pairs of consecutive 
 *        numbers such that the second number of the pair is greater than the first one.
 * @see https://jutge.org/problems/P73501_en
 */

#include <iostream>

/**
 * @brief Imprime un número del vector y la cantidad de veces que repite
 * @param kvector vector que tiene numeros introducidos
 * @param cantidad la catidad de posiciones del vector
 */
void ImprimirIncrementoParejas(int numero) {
  for (int i{0}; i < numero; i++) {
    int selecionado1{-1},selecionado2{-1},contador{0};
    while (selecionado1 != 0) {
      std::cin >> selecionado1;
      if (selecionado1 > selecionado2 && selecionado2 != -1) {
        contador = contador + 1;
      }
      selecionado2 = selecionado1;
    }
    std::cout << contador << "\n";
  }
}

/** Main function
 *  @param[in] argc NO
 *  @param[in] argv NO
 *  @brief Introduce un número
 */
int main() {
  int numero;
  std::cin >> numero;
  ImprimirIncrementoParejas(numero);
}