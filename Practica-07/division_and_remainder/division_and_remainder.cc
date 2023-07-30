/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file division_and_remainder.cc
  * @author alu0101469317@ull.edu.es  -  Marco Napierski
  * @date 11 Nov 2021
  * @brief The program reads two natural numbers a and b, with b > 0, and prints 
  * the integer division d and the remainder r of a divided by b.
  * By definition, d and r must be the only integer numbers such that 0=<r<b and db+r=a.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P48107
*/
#include <iostream>

void Mensaje() {
  std::cout << "The program reads two natural numbers a and b, with b > 0, and prints"
  << " the integer division d and the remainder r of a divided by b."
  << "By definition, d and r must be the only integer numbers such that 0=<r<b and db+r=a.";
}

int Division(int num1, int num2) {
  int res = num1 / num2;
  return res;
}

int Resto(int num1, int num2) {
  int res = num1 % num2;
  return res;
}

int main() {
  // Mensaje();
  int introducido1,introducido2;
  std::cin >> introducido1;
  std::cin >> introducido2;
  std::cout << Division(introducido1 , introducido2) << " " << Resto(introducido1 , introducido2) << "\n";
  return 0;
}