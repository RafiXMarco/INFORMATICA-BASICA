/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Marco Napierski
 * @date 1.dec.2021
 * @brief Write a program that reads triples of natural numbers a, b and k, 
 *        and for each one computes and prints the result of
 *                      (1 / (a + i * k)
 *        for all fractions with denominator smaller than or equal to b.
 * @see https://jutge.org/problems/P76024_en
 */

#include <iostream>
#include <iomanip>

/**
 * @brief suma toda las fraciones <= que numero2
 * @param numero1 es un denominador en la formula
 * @param numero2 determina la cantidad de veces que lo hace
 * @param numero3 es un denominador en la formula 
 * @return sumatorio de las fracciones
 */
double SumFractions(double numero1, double numero2, double numero3) {
  double sum{0};
  for (double i{0}; i < numero2; i++) {
    if ((numero1 + i * numero3) <= numero2) {
      sum = sum + (1 / (numero1 + i * numero3));
    }
  }
  return sum;
}
/** Main function
 *  @param[in] argc NO
 *  @param[in] argv NO
 *  @brief Introduce numeros y imprime el resultado a partir de la formula:
 *           ((1 / (numero1 + i * numero3)) <= numero2
 */
int main(){
  double numero1,numero2,numero3;
  while (std::cin >> numero1 >> numero2 >> numero3) {
    std::cout << std::setprecision(4) << std::fixed << SumFractions(numero1,numero2,numero3) << "\n";
  }
}