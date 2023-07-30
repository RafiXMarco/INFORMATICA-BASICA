/*  *Universidad de la Laguna
    *Escuela Superior de Ingenería y Tecnología 
    *Grado en Ingeniería Informática
    *Informática Básica
    @author Marco Napierski
    @date 01.11 2021
*/
#include <iostream>
#include <cmath>
#include <math.h>
int main(){
    double A = 0;std::cout<<"numero1 es: ";std::cin>>A;
    double B = 0;std::cout<<"numero2 es: ";std::cin>>B;
    std::cout<<"El resultado de operar "<<A<<"+"<<B<<" es "<<A+B<<"\n";
    std::cout<<"El resultado de operar "<<A<<"-"<<B<<" es "<<A-B<<"\n";
    std::cout<<"El resultado de operar la diferencia de "<<A<<" y "<<B<<" es "<<std::max(fabs(A-B),fabs(A-B)/A)<<"\n";
    std::cout<<"El resultado de operar "<<A<<"*"<<B<<" es "<<A*B<<"\n";
    std::cout<<"El resultado de operar "<<A<<"/"<<B<<" es "<<A/B<<"\n";
    std::cout<<"El resultado de operar "<<A<<"%"<<B<<" es "<<static_cast<int>(A)%static_cast<int>(B)<<"\n";
    std::cout<<"El resultado de operar "<<A<<"^"<<B<<" es "<<pow(A,B)<<"\n";
    if(A==B) {
        std::cout<<"A es igual a B\n";
    } else {
        std::cout<<"A no es igual a B\n";
    }
    if(A > B) {
        std::cout<<"A es mayor que B\n";
    } else {
        std::cout<<"A es menor que B\n";
    }
}