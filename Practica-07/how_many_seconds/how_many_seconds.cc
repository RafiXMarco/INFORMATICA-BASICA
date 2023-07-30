/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file how_many_seconds.cc
  * @author alu0101469317@ull.edu.es  -  Marco Napierski
  * @date 11 Nov 2021
  * @brief It is a program that converts to seconds a given 
  * amount of years, days, hours, minutes and seconds..
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P70955
*/
#include <iostream>

void Mensaje() {
  std::cout << "It is a program that converts to seconds a given "
  << " amount of years, days, hours, minutes and seconds..";
}

int CalcularSeg(int ano, int dia, int hora, int minu, int seg) {
  int res = ano * 365 * 24 * 60 * 60 + dia * 86400 + hora * 3600 + minu * 60 + seg;
  return res;
}

int main() {
  // Mensaje();
  int anos,dias,horas,min,seg;
  std::cin >> anos;
  std::cin >> dias;
  std::cin >> horas;
  std::cin >> min;
  std::cin >> seg;
  std::cout << CalcularSeg(anos,dias,horas,min,seg) << std::endl;
}