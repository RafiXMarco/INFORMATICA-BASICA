/*  *Universidad de la Laguna
    *Escuela Superior de Ingenería y Tecnología 
    *Grado en Ingeniería Informática
    *Informática Básica
    @author Marco Napierski
    @date 01.11 2021
*/
#include <iostream>
int main(){
    char letra=0;
    while((letra <= 96 || letra >=122)&&(letra <= 64 || letra >=90)) {
    std::cout<< "Introduzca una letra: ";
    std::cin>>letra; std::cout<<"\n";
        if ((letra <= 96 || letra >=122)&&(letra <= 64 || letra >=90)){
            std::cout<<"Incorrecto \n";
        }
        if (letra >= 96 && letra <=122){
            letra = letra-32;
            std::cout<<"La mayuscula será: "<<letra<<"\n";
            return 0;
        }
        if (letra >= 64 && letra <=90){
            letra = letra+32;
            std::cout<<"La minuscula será: "<<letra<<"\n";
            return 0;
        }
    }  
}
