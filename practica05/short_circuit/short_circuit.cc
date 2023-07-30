/*  *Universidad de la Laguna
    *Escuela Superior de Ingenería y Tecnología 
    *Grado en Ingeniería Informática
    *Informática Básica
    @author Marco Napierski
    @date 01.11 2021
*/
#include <iostream>
int main(){
bool A = true;
bool B = false;
std::cout<<"A es 1 y B es 0, usando || :";
    if(A||B||std::cout<<"si ves esto es que no lo ignora\n"){
        std::cout<<"1\n";
    } else {
        std::cout<<"0\n";
    }
std::cout<<"A es 1 y B es 0, usando && :";
    if(A&&B&&std::cout<<"si ves esto es que no lo ignora\n"){
        std::cout<<"1\n";
    } else {
        std::cout<<"0\n";
    }
A=false;
B=true;
std::cout<<"A es 0 y B es 1, usando || :";
    if(A||B||std::cout<<"si ves esto es que no lo ignora\n"){
        std::cout<<"1\n";
    } else {
        std::cout<<"0\n";
    }
std::cout<<"A es 0 y B es 1, usando && :";
    if(A&&B&&std::cout<<"si ves esto es que no lo ignora\n"){
        std::cout<<"1\n";
    } else {
        std::cout<<"0\n";
    }
    std::cout<< "como se ve, lo ignora, ya que en este codigo esta puesto\n(A||B||std::cout<<si ves esto es que no lo ignora \n y por lo esta tanto lo ignora \n";
}