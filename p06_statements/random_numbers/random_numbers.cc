/*  *Universidad de la Laguna
    *Escuela Superior de Ingenería y Tecnología 
    *Grado en Ingeniería Informática
    *Informática Básica
    @author Marco Napierski
    @date 04.11 2021
*/
#include <iostream>
#include <experimental/random>
int main(){  
  std::cout<<"introduzca dos número y el programa le dará un número aleatorio entre los que ha introducido\n";
  int num1,num2;
  std::cout<<"Primer número: ";std::cin>>num1;
  std::cout<<"Segundo número: ";std::cin>>num2;
  if(num1 < num2){
    std::cout<<"El número aleatorio será: "<<std::experimental::randint(num1,num2)<<"\n";
  }
  if(num1 > num2){
    std::cout<<"El número aleatorio será: "<<num2 + std::experimental::randint(num2,num1)<<"\n";
  }
}