/*  *Universidad de la Laguna
    *Escuela Superior de Ingenería y Tecnología 
    *Grado en Ingeniería Informática
    *Informática Básica
    @author Marco Napierski
    @date 04.11 2021
*/
#include <iostream>
int main(){
  int lado{0};
  std::cout<<"Indroduzca longitud del lado para formar un cuadrado de asteriscos: ";std::cin>> lado;
  for(int i=0;i<lado;i++){
    for(int j=0;j<lado;j++){
      std::cout<<"*";
    }
    std::cout<<"\n";
  }
}