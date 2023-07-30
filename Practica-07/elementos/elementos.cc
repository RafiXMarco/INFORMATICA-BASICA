/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file elementos.cc
  * @author alu0101469317@ull.edu.es  -  Marco Napierski
  * @date 11 Nov 2021
  * @brief It is a program that, given A, V or P as player1 and A, V or P for player2
  * A (water) winning agains P(stone) and losing versus V(wind) and tie vs. himself, also
  * V vs P wins V, P vs V wins P. 
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P51352
*/
#include <iostream>

void Mensaje() {
  std::cout << "It is a program that, given A, V or P as player1 and A, V or P for player2"
  << " A (water) winning agains P(stone) and losing versus V(wind) and tie vs. himself, also"
  << " V vs P wins V, P vs V wins P. ";
}

int QuienGana(char numero1, char numero2) {
  int ganador;
  switch (numero1) {
  case 'A':
    if (numero2 == 'V') {
      ganador = 2;
    }
    if (numero2 == 'P') {
      ganador = 1;
    }
    if (numero2 == 'A') {
      ganador = 0;
    }
    break;
  case 'V':
    if (numero2 == 'A') {
      ganador = 1;
    }
    if (numero2 == 'P') {
      ganador = 2;
    }
    if (numero2 == 'V') {
      ganador = 0;
    }
    break;
  case 'P':
    if (numero2 == 'V') {
      ganador = 1;
    }
    if (numero2 == 'P') {
      ganador = 0;
    }
    if (numero2 == 'A') {
      ganador = 2;
    }
    break;
  default:
    break;
  }
  return ganador;
}

int main () {
  // Mensaje();
  char num1,num2;
  std::cin >> num1;
  std::cin >> num2; 
  if (QuienGana(num1, num2) == 0){
    std::cout << "-" << "\n";
  } else {
    std::cout << QuienGana(num1, num2) << "\n";
  }
}