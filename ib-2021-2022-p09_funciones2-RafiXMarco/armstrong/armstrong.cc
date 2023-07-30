/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Marco Napierski
 * @date 1.dec.2020
 * @brief Un número de Armstrong es un número que es la suma 
 *        de sus propios dígitos, cada uno de los cuales 
 *        elevado al número de dígitos del número. Por ejemplo:
 *        9 es un número de Armstrong porque: 9 = 91 = 9
 *        10 no es un número de Armstrong porque: 10 != 12 + 02 = 1
 *        153 es un número de Armstrong porque: 153 = 13 + 53 + 33 = 1 + 125 + 27 = 153
 *        154 no es un número de Armstrong porque: 154 != 13 + 53 + 43 = 1 + 125 + 64 = 190
 */

#include <iostream>
#include "funciones.h"

/** Main function
 *  @param[in] argc Number of command line parameters
 *  @param[in] argv Vector containing (char*) the parameters
 */
int main(int argc, char* argv[]) {
  Usage(argc, argv);
  std::string posicion1 = argv[1];
  const int numero_introducido = stoi(posicion1);
  ComprobacionArmstrong(numero_introducido); 
  return 0;
}