/*  *Universidad de la Laguna
    *Escuela Superior de Ingenería y Tecnología 
    *Grado en Ingeniería Informática
    *Informática Básica
    @author Marco Napierski
    @date 04.11 2021
*/
#include <iostream>

int main () {
  std::cout << "Este programa muestra en pantalla si hace calor, hace frío o está bien. Por otro lado, muestra si el agua está hirviendo, congelada, o ninguno de los dos" << std::endl << std::endl;
  std::cout << "Indique la temperatura en la que se encuentra el ambiente: " << std::endl;
  int temperatura_ambiente{0};
  std::cin >> temperatura_ambiente;
  if (temperatura_ambiente < 30 && temperatura_ambiente > 10) {
  std::cout << "No hace ni frío ni calor" << std::endl; 
  } else {
    if (temperatura_ambiente > 30) {
      std::cout << "Hace calor" << std::endl;
    }
    if (temperatura_ambiente < 10) {
      std::cout << "hace frío" << std::endl;
    }
  }
  std::cout << "Ahora indique la temperatura a la que se encuentre el agua: " << std::endl;
  int temperatura_agua{0};
  std::cin >> temperatura_agua;
  if (temperatura_agua < 100 && temperatura_agua > 0) {
    std::cout << "El agua no está ni hirviendo ni congelada" << std::endl; 
  } else {
    if (temperatura_agua >= 100) {
      std::cout << "El agua está hirviendo" << std::endl;
    }
    if (temperatura_agua <= 0) {
      std::cout << "El agua se congeló" << std::endl;
    }
  }
  return 0;
}