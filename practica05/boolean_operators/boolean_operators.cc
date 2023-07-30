/*  *Universidad de la Laguna
    *Escuela Superior de Ingenería y Tecnología 
    *Grado en Ingeniería Informática
    *Informática Básica
    @author Marco Napierski
    @date 01.11 2021
*/
#include <iostream>
int main(){
    const bool primaria[]{false,false,false,true,true,false,true,true};
    std::cout<< "A B AND OR NOT";
    for(int i=0;i<8;i=i+2){
        std::cout<<"\n"<<primaria[i]<<" "<<primaria[i+1]<<"  ";
        std::cout<<primaria[i]*primaria[i+1]<<"  ";
        std::cout<<(primaria[i]+primaria[i+1]==1||primaria[i]+primaria[i+1]==2)<<"   ";
        std::cout<<!primaria[i]<<"\n";
    
    }
}