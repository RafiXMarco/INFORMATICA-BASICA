#include <iostream>
using  namespace std;

// 3 alumnos hacer media con float de 0.0 a 10.0
int main () {

float alu1 = -1;
float alu2 = -1;
float alu3 = -1;

    while(alu1 <= 0 || alu1 >= 10){
        cout << "¿Qué nota sacó el primer alumno? ";
        cin >> alu1;
        if (alu1 <= 0 || alu1 >= 10) {
            cout << " Tiene que ser entre 0 y 10\n";
        }
    }
    while(alu2 <= 0 || alu2 >= 10){
        cout << "¿Qué nota sacó el sgundo alumno? ";
        cin >> alu2;
        if (alu2 <= 0 || alu2 >= 10) {
            cout << " Tiene que ser entre 0 y 10\n";
        }
    }
    while(alu3 <= 0 || alu3 >= 10){
        cout << "¿Qué nota sacó el tercer alumno? ";
        cin >> alu3;
        if (alu3 <= 0 || alu3 >= 10) {
            cout << " Tiene que ser entre 0 y 10\n";
        }
    }
    cout << "La nota media de los alumnos es de: " << (alu1+alu2+alu3)/3 << "\n";

    
    


}