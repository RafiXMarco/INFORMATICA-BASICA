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
 *  @brief calcula la cantidad de digitos
 *  @param[in] numero_introducido. es el número introducido
 *  @return la catidad de digitos de numero_introducido
 */
int CalculoDeDigitos(int numero_introducido) {
  int digitos{0};
  while (numero_introducido != 0) {
    numero_introducido = numero_introducido / 10;
    digitos++;
  }
  return digitos;
}

/** 
 *  @brief hace en 153, 1^3 + 5^3 + 3^3 = @return 
 *  @param[in] numero_introducido. calcula la cantidad de digitos
 *  @return el resultado de @brief
 */
int SumDigitosElevados(int numero_introducido) {
  int numero_variable = numero_introducido;
  int sum{0};
  const int kDigitos = CalculoDeDigitos(numero_introducido);
  for (int i{0}; i < kDigitos; i++) {
    numero_variable = numero_introducido % 10;
    numero_introducido = numero_introducido / 10;
    sum = sum + pow(numero_variable, kDigitos);
  }
  return sum;
}

/** 
 *  @brief comprueva si dos números son los mismos
 *  @param[in] numero_introducido comprueba si son los mismos
 */
void ComprobacionArmstrong(int numero_introducido) {
  if (SumDigitosElevados(numero_introducido) == numero_introducido){
    std::cout << numero_introducido << " is an Armstrong number" << "\n";
  } else {
    std::cout << numero_introducido << " is not an Armstrong number" << "\n";
  }
}
