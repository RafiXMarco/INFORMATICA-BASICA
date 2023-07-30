#include <iostream>
using  namespace std;

int main () {
    float euros = 0;
    float yenes = 0.0075;
    cout << "¿Cuántos euros tienes?";
    cin >> euros;
    euros = euros/yenes;
    cout << "\n Eso equivale a "<< euros << " yenes\n";
}