/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file add_one_second.cc
  * @author alu0101469317@ull.edu.es  -  Marco Napierski
  * @date 11 Nov 2021
  * @brief It is a program that adds one second to a clock time, given its hours, minutes and seconds..
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P34279
*/
#include <iostream>

void Mensaje() {
  std::cout << "It is a program that adds one second to a clock time, "
  << "given its hours, minutes and seconds..";
}

int Timer(int horas,int minutos,int segundos) {
  while(segundos > 59 || minutos > 59 || horas > 23) {
    if(segundos > 59) {
      segundos = segundos - 60;
      minutos += 1;
    }
    if(minutos > 59) {
      minutos = minutos - 60;
      horas += 1;
    }
    if(horas > 23) {
      horas = 0;
    }
  }
  if(horas < 10) { // aqui empieza a imprimir por pantalla
    std::cout << "0" << horas << ":";
  } else {
    std::cout << horas << ":";
  }
  if(minutos < 10) {
    std::cout << "0" << minutos << ":";
  } else {
    std::cout << minutos << ":";
  }
  if(segundos < 10) {
    std::cout << "0" << segundos;
  } else {
    std::cout << segundos;
  }
  return 0;
}

int main() {
  // Mensaje();
  int horas,minutos,segundos;
  std::cin >> horas;
  std::cin >> minutos;
  std::cin >> segundos;
  segundos += 1;
  Timer(horas,minutos,segundos);
  std::cout << "\n";
}