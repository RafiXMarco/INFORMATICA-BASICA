#include <iostream>
#include <string>
int main() {
    std::string palabra;
    bool contar = false;
    int cantida;
    bool begi = false;
    std::string beg = "beginning";
    std::string end = "end";
    while(palabra != "end") {
            std::cin >> palabra;
        if(contar == true){
         cantida = cantida + 1;
        }
        if (palabra == beg){
            contar = true;
            begi = true;
        }
        if (palabra == end){
            contar = false;
        }
    }
    if (begi == false) {
        std::cout << "wrong sequence";
    }
    cantida = cantida - 1;
    std::cout << cantida << "\n";
}
