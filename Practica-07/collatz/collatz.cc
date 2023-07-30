/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file collatz.cc
  * @author aliu0101469317@ull.edu.es  -  Marco Napierski
  * @date 11 Nov 2021
  * @brief It is a program that prints the number of steps 
  * that it takes to reach 1 for every given n..
  * In which, if n is an even number, we divide it by two.
  * Otherwise, we multiply it by 3 and add 1 to it.
  * When we reach 1, we stop.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P80660
*/
#include <iostream>

void Mensaje() {
  std::cout << "It is a program that prints the number of steps "
  << "that it takes to reach 1 for every given n.."
  << "In which, if n is an even number, we divide it by two."
  << "Otherwise, we multiply it by 3 and add 1 to it."
  << "When we reach 1, we stop.";
}

int Steps(int numero) {
  int step{0};
  while(numero != 1){
    if(numero % 2 == 0){
      numero=numero / 2;
      step += 1;
    } else {
      numero=numero * 3 +1;
      step += 1;
    }
  }
  return step;
}

int main() { 
  // Mensaje();
  int numero;
  while(std::cin >> numero){
    std::cout << Steps(numero) << "\n";
  }
}
  