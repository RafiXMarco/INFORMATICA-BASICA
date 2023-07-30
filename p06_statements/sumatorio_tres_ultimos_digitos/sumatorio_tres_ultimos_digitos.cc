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
  int sumatorio{0};
  std::cout<<"Introduzca un número natural e imprimirá como salida la suma de los últimos tres dígitos del número\n";
  std::cout<<"El número: "; std::cin>>introducido;
  int final=introducido;
  int condicion{3};
  while(!(introducido==0)){
    if(!(condicion==0)){
      if(introducido%10 ==0){
        introducido = introducido/10;
        condicion = condicion -1;
      } else {
        introducido= introducido-1;
        sumatorio= sumatorio+1;
      }
    } else {
      introducido = 0;
    }
  }
  std::cout<<"El sumatorio de: "<<final<<" es "<< sumatorio <<"\n";
}