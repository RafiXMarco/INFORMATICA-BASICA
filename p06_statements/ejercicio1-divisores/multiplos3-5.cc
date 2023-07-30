#include <iostream>

int main(){
int indice{1};
int suma{0};
int numero_seleccionado{0};
bool repetir=true;
int numero1;
int numero2;
int constante;
std::cout<< "Introduzca el primer numero: "; std::cin >> numero1;
std::cout<< "Introduzca el segundo numero: ";std::cin >> numero2;
std::cout<< "Introduzca hasta que numero llegar: "; std::cin >> constante;
  while(repetir==true){
      numero_seleccionado = numero1*indice;
      if (numero_seleccionado<constante){
        suma = suma + numero1*indice;
        indice = indice +1;
      } else {
          repetir=false;
      }
  }
  repetir=true;
  indice=0;
  numero_seleccionado=0;
  while(repetir==true){
      numero_seleccionado = numero2*indice;
      if (numero_seleccionado<constante){
        suma = suma + numero2*indice;
        indice = indice +1;
      } else {
          repetir=false;
      }
  }
  std::cout<< "La suma es: "<< suma<<"\n";
}