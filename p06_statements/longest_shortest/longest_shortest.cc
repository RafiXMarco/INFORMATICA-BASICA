/*  *Universidad de la Laguna
    *Escuela Superior de Ingenería y Tecnología 
    *Grado en Ingeniería Informática
    *Informática Básica
    @author Marco Napierski
    @date 04.11 2021
*/
#include <iostream>
#include <string>

int main(){
  std::cout<<"Introducirá la cantidad de palabras que escribirá y después introducirá las palabras y este programa le dirá la paralabra más corta y la más larga.";
  int cantidad{0};
  std::string mayor;
  std::string menor;
  std::string palabra;
  std::cout<<"\nCantidad de palabras: ";std::cin>> cantidad;
  bool repetir=true;
  for(int i=1;i<cantidad+1;i++){
    std::cout<<"Palabra "<<i<<":";std::cin>> palabra;
    if(repetir==true){
      menor =palabra;
      repetir=false;
    }
    if(palabra.length()<menor.length()){
      menor = palabra;
    }
    if(palabra.length()>mayor.length()){
      mayor = palabra;
    } 
  }
  std::cout<<"La palabra más larga es "<<mayor<<"\n";
  std::cout<<"La palabra más corta es "<<menor<<"\n";
    
}