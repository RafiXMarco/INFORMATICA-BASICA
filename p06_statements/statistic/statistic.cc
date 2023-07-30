/*  *Universidad de la Laguna
    *Escuela Superior de Ingenería y Tecnología 
    *Grado en Ingeniería Informática
    *Informática Básica
    @author Marco Napierski
    @date 04.11 2021
*/
#include <iostream>
#include <vector>
#include <experimental/random>
int main(){  
  std::cout<<"Introduzca la cantidad de números aleatorio que quiere dentro del rango [0.0,10.0], el programa nos dará la media, el número mayor y el número menor";
  int cantidad{0};
  double random{0};
  double random_d{0};
  double sumatorio{0};
  double mayor,menor;
  bool repetir{true};
  std::cout<<"\nCantidad de numeros aleatorios: "; std::cin>>cantidad;
  std::vector<double>kVectorSize;
  for(int i=1;i<cantidad+1;i++){
    random = std::experimental::randint(0,10);
    if(random!=10){
      random_d = static_cast<double>(std::experimental::randint(0,9))/10;
      random= random+random_d;
    }
    kVectorSize.push_back(random);
    std::cout<<"Número "<<i<<":"<<random<<std::endl;
    sumatorio = sumatorio + random;
    if(repetir==true){
      menor =random;
      repetir=false;
    }
    if(random > mayor){
      mayor = random;
    }
    if(random < menor){
      menor = random;
    }
  }
  std::cout<<"\nLa media es: " <<sumatorio/cantidad<<"\n";
  std::cout<<"\nEl mayor es: " <<mayor<<"\n";
  std::cout<<"\nEl menor es: " <<menor<<"\n";

}