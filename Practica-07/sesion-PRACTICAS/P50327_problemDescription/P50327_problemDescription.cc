#include <iostream>


int Revez(){
  int numero{0};
  std::cin >> numero;
  int temp{1};
  bool unavez = true;
  if(numero != 0){
  while (numero > 0){
    if (numero % 10 == 0){
      numero = numero / 10;
      if(temp != 0){
      std::cout << "0";
      temp = 0;
      }
    } else {
      if(unavez == true){
          temp = 0;
          unavez = false;
      }
      numero = numero - 1;
      temp = temp + 1;
    }      
    if (numero % 10 == 0){
      std::cout << temp; 
      temp = 0; 
    }
  }
  } else {
    std::cout << "0";
  }
  std::cout << "\n";
  return 0;
}

int main () {
  Revez();
}