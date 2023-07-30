/*  *Universidad de la Laguna
    *Escuela Superior de Ingenería y Tecnología 
    *Grado en Ingeniería Informática
    *Informática Básica
    @author Marco Napierski
    @date 01.11 2021
*/
#include <iostream>
#include <algorithm>
int main(){
    int Sbool = sizeof(bool);
    int Schar = sizeof(char);
    int Sint = sizeof(int);
    int Sfloat = sizeof(float);
    int Sdouble = sizeof(double);
    int Swchart = sizeof(wchar_t);
    int sizeofall[]={Sbool,Schar,Sdouble,Sfloat,Sint,Swchart};
    std::sort(std::begin(sizeofall),std::end(sizeofall));
    int n= sizeof(sizeofall)/sizeof(sizeofall[0]);
    for(int i=0;i<n;i++){
        if(Sbool==sizeofall[i]&&Schar==sizeofall[i]){
            std::cout<<"El tipo de datos bool se representa utilizando "<<sizeof(bool)<< " bytes\n";
            std::cout<<"El tipo de datos character se representa utilizando "<<sizeof(char)<< " bytes\n";
            i++;
        }
        if(Sint==sizeofall[i]&&Sfloat==sizeofall[i]&&Swchart==sizeofall[i]){
            std::cout<<"El tipo de datos int se representa utilizando "<<sizeof(int)<< " bytes\n";
            std::cout<<"El tipo de datos float se representa utilizando "<<sizeof(float)<< " bytes\n";
            std::cout<<"El tipo de datos wide character se representa utilizando "<<sizeof(wchar_t)<< " bytes\n";
            i++;i++;
        }
        if(Sdouble==sizeofall[i]){
            std::cout<<"El tipo de datos double se representa utilizando "<<sizeof(double)<< " bytes\n";  
        }
    }
}