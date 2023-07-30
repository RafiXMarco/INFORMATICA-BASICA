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
#include <cmath>

/** Muestra el modo de uso correcto del programa
 *  En caso de que el uso no sea el correcto, muestra el mensaje y finaliza
 *  la ejecución del programa.
 *  El programa precisa un único número natural para su ejecución.
 *
 *  @param[in] argc Number of command line parameters
 *  @param[in] argv Vector containing (char*) the parameters
 */
void Usage(int argc, char *argv[]) {
  if (argc != 2) {
    std::cout << argv[0] << ": Falta un número natural como parámetro" << std::endl;
    std::cout << "Pruebe '" << argv[0] << " --help' para más información" << std::endl;
    exit(EXIT_SUCCESS);
  }
  std::string parameter{argv[1]};
  if (parameter == "--help") {
    std::cout << kHelpText << std::endl;
    exit(EXIT_SUCCESS);
  }
}

/** 
 *  @brief calcula si es primo o no
 *  @param[in] nuemro a verificar si es primo
 *  @return true / false : si es primo o no
 */
bool IsPrimo(int numero) {
  for (int i{2}; i < sqrt(numero); i++) {
    if (numero % i == 0) {
      return false;
    }
  }
  return true;
}

/** 
 *  @brief calcula e imprime los n(cantidad) primeros numeros mersenne
 *  @param[in] cantidad de repeticiones
 */
void Mersenne(int cantidad) {
  int resultado{0};
  for (int i{2}; i< cantidad + 2; i++) {
    resultado = (pow(2,i) - 1);
    if (IsPrimo(resultado) == true) {
      std::cout << resultado << "\n";
    } else {
      cantidad++;
    }
  }
}
