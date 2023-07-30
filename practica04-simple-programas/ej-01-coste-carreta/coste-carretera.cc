#include <iostream>
using  namespace std;

int main () {
    int coste_por_metro = 1624;
    int longitud = 0;
    int resultado = 0;
    cout << "Indroduzca la longitud de la carrtera: ";
    cin >> longitud;
    resultado = coste_por_metro * longitud;
    cout << "El coste de " << longitud << " metros será de: " << resultado << "\n" ;
}