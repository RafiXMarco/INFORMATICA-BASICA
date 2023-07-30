/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Marco Napierski
 * @date 1.dec.2020
 * @brief This file declares the "Help Text" constant and two functions
 *
 */
#include <iostream>

const std::string kHelpText = "Este programa calcula los números mersenne \
mayores que 2, en el que el usuario introducirá la cantidad de números mersenne \
que querrá que el programa calcule, además para introducir un número \
ha de introducir por línea de comandos para la ejecución del programa";

void Usage(int argc, char *argv[]);
void Mersenne(int numero_introducido);
