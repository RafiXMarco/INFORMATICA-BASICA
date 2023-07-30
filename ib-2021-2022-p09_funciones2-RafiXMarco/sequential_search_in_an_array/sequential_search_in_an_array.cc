/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Marco Napierski
 * @date 1.dec.2021
 * @brief Write a function that tells if the integer number x 
 *         is present in the vector of integer numbers v.
 *         In order to compare the efficiency of your solution 
 *         against the efficiency of the solution of the Judge, 
 *         start searching for x from the lowest positions.
 * @see https://jutge.org/problems/P11725_en
 */

#include <iostream>
#include <vector>

/**
 * @brief busca un número x en el vector v
 * @param x numero que buscamos
 * @param v vector que recorre
 * @return true: si lo ha encontrado
 *         false si no lo ha encontrado
 */
bool exists(int x, const std::vector<int>& v) {
  for (long unsigned int i{0}; i < v.size(); i++) {
    if (x == v[i]) {
      return true;
    }
  }
  return false;
}

int main() {} // para el makefile, para que no me de error