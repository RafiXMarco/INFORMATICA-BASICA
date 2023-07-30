/*  *Universidad de la Laguna
    *Escuela Superior de Ingenería y Tecnología 
    *Grado en Ingeniería Informática
    *Informática Básica
    @author Marco Napierski
    @date 04.11 2021
*/
#include <iostream>
int main(){
  int numero_variando{1};
  int indroducido{0};
  std::cout<<"Este programa solicitará un número e imprimirá en pantalla todos los divisores del número introducido";
  std::cout<<"\nIntroduzca el número: "; std::cin>>indroducido;
  int max = indroducido+1;
  while (!(numero_variando == max)){
    if((indroducido % numero_variando)==0){
      std::cout<<numero_variando<<" ";
    }
    numero_variando = numero_variando+1;
  }
  std::cout<<"\n";
}