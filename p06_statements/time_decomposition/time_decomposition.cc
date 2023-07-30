/*  *Universidad de la Laguna
    *Escuela Superior de Ingenería y Tecnología 
    *Grado en Ingeniería Informática
    *Informática Básica
    @author Marco Napierski
    @date 04.11 2021
*/
#include <iostream>
int main(){
  int introducido{0};
  std::cout<<"Introduzca un número natural para saber las horas, minutos y segundos: "; std::cin>>introducido;
  int horas{0};
  int minutos{0};
  int segundos{0};
  while(!(introducido==0)){
    if(introducido>=3600){
      introducido= introducido-3600;
      horas = horas + 1;
    } else {
      if(introducido>=60){
        introducido= introducido-60;
        minutos= minutos+1;
      } else {
        if(introducido>=1){
          introducido = introducido-1;
          segundos = segundos +1;
        }
      }
    }
  }
  std::cout<<"HORAS: "<<horas<<"\nMINUTOS: "<<minutos<<"\nSEGUNDOS: "<<segundos<<"\n";
}