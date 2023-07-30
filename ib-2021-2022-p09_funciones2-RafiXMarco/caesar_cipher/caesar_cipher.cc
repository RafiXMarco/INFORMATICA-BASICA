/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Marco Napierski
 * @date 1.dec.2021
 * @brief Write a program that encrypts messages with the “Caesar cipher”, 
 *        used by Julius Caesar to communicate with his generals. 
 *        Given a constant k, each letter of the original message is replaced 
 *        by the letter that is alphabetically k positions to its right 
 *        (circularly, if needed). For instance, if k = 5, we must 
 *        change ‘a’ by ‘f’, ‘b’ by ‘g’, …, ‘y’ by ‘d’, and ‘z’ by ‘e’.
 * @see https://jutge.org/problems/P33371_en
 */

#include <iostream>

/**
 * @brief hace la conversion de 'a' a 'A' + el codigo secreto
 * @param caracter es el caracter a cambiar
 * @param formula_secreta será el codigo secreto
 * @return caracter ya codificado 
 */
char Encoded(char caracter, int formula_secreta) {
  if (caracter == '_') {
    return ' ';
  } else if (caracter == '.') {
    return '\n';
  } if (caracter <= 'z' && caracter >= 'a') {
    formula_secreta = formula_secreta%('z' - 'a' + 1);
    caracter = caracter - 'a';
    caracter = caracter + formula_secreta;
    caracter = caracter%('z' - 'a' + 1);
    caracter = caracter + 'A';
  }
  return caracter;
}

/** Main function
 *  @param[in] argc NO
 *  @param[in] argv NO
 *  @brief Imprime caracter por caracter codificado
 */
int main() {
  int formula_secreta;
  while (std::cin >> formula_secreta) {
    char caracter = 'a';
    while (caracter != '.') {
      std::cin >> caracter;
      std::cout << Encoded(caracter, formula_secreta);
    }
  }
}
