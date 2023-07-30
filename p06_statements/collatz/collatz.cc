/*  *Universidad de la Laguna
    *Escuela Superior de Ingenería y Tecnología 
    *Grado en Ingeniería Informática
    *Informática Básica
    @author Marco Napierski
    @date 04.11 2021
*/
#include <iostream>
int main(){  
	std::cout<<"Introduzca un número entero, este programa hará la secuencia de Collatz con el numero";
  int numero{0};
  std::cout<<"\nEscriba el número: ";std::cin>>numero;
  while(numero!=1){
      std::cout<<numero<<" ";
      if(numero%2==0){
          numero=numero/2;
      } else {
          numero=numero*3 +1;
      }
  }
  std::cout<<"\n";
}