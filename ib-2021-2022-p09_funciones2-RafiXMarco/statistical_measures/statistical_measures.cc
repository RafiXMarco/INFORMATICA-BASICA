/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Marco Napierski
 * @date 1.dec.2021
 * @brief Write a program that reads non-empty sequences 
 *        of real numbers and, for each sequence, 
 *        prints its minimum, its maximum and its average.
 * @see https://jutge.org/problems/P17179_en
 */

#include <iostream>
#include <iomanip>

/**
 * @brief Pide e imprime el mínimo, máximo y la media.
 * @param numero_introducido lo introduce el usuario para que lo haga n veces
 */
void ImprimirMenorMaxMedia(int numero_introducido) {
  for (int i{0}; i < numero_introducido; i++) {
    int cantidad;
    double indice,mayor,menor,sum;
    std::cin >> cantidad >> mayor;
    menor = mayor;
    sum = mayor;
    for (int j{1}; j < cantidad; j++) {
      std::cin >> indice;
      if (indice > mayor) {
        mayor = indice;      
      }
      if (indice < menor) {
        menor = indice;
      }
      sum = sum + indice;
    }
    std::cout << std::fixed << std::setprecision(4) << menor << " " << mayor << " " << sum/cantidad << "\n";
  }
}

/** Main function
 *  @param[in] argc NO
 *  @param[in] argv NO
 *  @brief Introduce numeros y imprime el resultado de la función ImprimirMenorMaxMedia
 */
int main() {
    int numero_introducido;
    std::cin >> numero_introducido;
    ImprimirMenorMaxMedia(numero_introducido);
}