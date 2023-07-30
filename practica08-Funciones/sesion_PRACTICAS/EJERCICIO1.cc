#include <iostream>

int main() {
    int number1;
  bool isprimo = true;
  bool repetir = true;
  int mayor{0};

 std::cin >> number1;
 mayor = number1;
        for (int i{number1 - 1}; i >= 2; i--) {
            if (number1 % i == 0){
                for (int j{2}; j < i; j++) {
                    if (i % j == 0){
                        j = i -1; 
                        isprimo = false;
                    }
                }
                if (isprimo == true) {
                    if(repetir == true) {
                        mayor = i;
                        repetir = false;
                    } else if(i > mayor) {
                    mayor = i;  
                    }
                }
                isprimo = true;
            }
        }
    std::cout << mayor << "\n";
    return 0;
}