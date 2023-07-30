/*  *Universidad de la Laguna
    *Escuela Superior de Ingenería y Tecnología 
    *Grado en Ingeniería Informática
    *Informática Básica
    @author Marco Napierski
    @date 04.11 2021
*/
#include <iostream>
int main(){
  std::cout<<"Dí un año y este programa te dirá si es bisiesto o no\n";
  int year{0};
  std::cout<<"El año: ";std::cin>>year;
  if(   ((year%4)==0)  &&    (  (!((year%100)==0))  ||   ((year%400)==0)  )  ){
    std::cout<< "es bisiesto\n";
  } else {
    std::cout<< "no es bisiesto\n";
  }
}