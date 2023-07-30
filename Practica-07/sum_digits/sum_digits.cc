/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file sum_digits.cc
  * @author alu0101469317@ull.edu.es  -  Marco Napierski
  * @date 11 Nov 2021
  * @brief It is a program that reads several numbers and
  *  prints the sum of the digits of each one..
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P33839
*/
#include <iostream>

void Mensaje() {
  std::cout << "It is a program that reads several numbers and "
  << " prints the sum of the digits of each one..";
}

int SumOfDigits(int introducido) {
int sumatorio{0};
  while(!(introducido == 0)) {
    if(introducido % 10 == 0) {
      introducido = introducido / 10;
    } else {
      introducido = introducido - 1;
      sumatorio = sumatorio + 1;
    }
  }
  return sumatorio;
}

int main() {
  // Mensaje();
  int introducido;
  while(std::cin >> introducido) {
    std::cout << "The sum of the digits of " << introducido << " is " << SumOfDigits(introducido) << ".\n";
  }
}