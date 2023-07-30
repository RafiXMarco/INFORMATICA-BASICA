/*  *Universidad de la Laguna
    *Escuela Superior de Ingenería y Tecnología 
    *Grado en Ingeniería Informática
    *Informática Básica
    @author Marco Napierski
    @date 01.11 2021
*/
#include <iostream>
int main(){
    int a = 65;
    int& num1= a;
    bool b=true;
    bool&  num2 = b;
    double c = 112.343;
    double& num3= c;
    char d = 94;
    char& num4 = d;
    std::cout<< "valor de un int es "<<a<< " y la referencia es "<<num1<<"\n";
    std::cout<< "valor de un bool es "<<b<< " y la referencia es "<<num2<<"\n";
    std::cout<< "valor de un double es "<<c<< " y la referencia es "<<num3<<"\n";
    std::cout<< "valor de char es "<<d<< " y la referencia es "<<num4<<"\n";
}