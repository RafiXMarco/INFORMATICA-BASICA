/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Marco Napierski
 * @date 1.dec.2020
 * @brief Un primo de Mersenne es un número primo de la forma 2p - 1. 
 *        Una propiedad conocida de de los primos de Mersenne es 
 *        que p debe ser también un número primo. Desarrolle un programa
 *        mersenne.cc que tome por línea de comandos un número N y muestre 
 *        como salida los primeros N primos de Mersenne.
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
  const int cantidad = stoi(posicion1);
  Mersenne(cantidad); 
  return 0;
}