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

const std::string kHelpText = "Este programa calcula si el número \
introducido es un número amstrong o no";

void Usage(int argc, char *argv[]);
void ComprobacionArmstrong(int numero_introducido);
