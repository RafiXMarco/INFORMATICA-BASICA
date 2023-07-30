#include <iostream>
#include <cmath>
using  namespace std;

int main () {
    int x1 = 0;
    int x2 = 0;

    int y1 = 0;
    int y2 = 0;

    int z1 = 0;
    int z2 = 0;

    cout << "Introduzca x,y,z de A: \n x1: "; cin >> x1;
    cout << "\n y1: "; cin >> y1;
    cout << "\n z1: "; cin >> z1;
    cout << "Introduzca x,y,z de B: \n x2: "; cin >> x2;
    cout << "\n y2: "; cin >> y2;
    cout << "\n z2: "; cin >> z2;

    float resultado = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1) + (z2-z1)*(z2-z1));
    cout << "\n La distancia es "<< resultado << "\n";
}