#include <iostream>
using  namespace std;

int main () {

    float sum_centimos = 0;
    float centimo = 0;
//1 5 20 50
    cout << "Cuantas monedas tienes de: \n 1 céntimo: "; cin >> centimo;
    sum_centimos = centimo + sum_centimos;
    cout << " 5 céntimos: "; cin >> centimo;
    sum_centimos = (centimo*5) + sum_centimos;
    cout << " 20 céntimos: "; cin >> centimo;
    sum_centimos = (centimo*20) + sum_centimos;
    cout << " 50 céntimos: "; cin >> centimo;
    sum_centimos = (centimo*50) + sum_centimos;
    cout << "\n Tienes: " << sum_centimos << " centimos";

    float sum_billetes = 0;
    float billetes = 0;
//5 10 20 50 100 200 500
    cout << "\n Cuantos billetes tienes de: \n 5 euros: "; cin >> billetes;
    sum_billetes = (billetes*5) + sum_billetes;
    cout << " 10 euros: "; cin >> billetes;
    sum_billetes = (billetes*10) + sum_billetes;
    cout << " 20 euros: "; cin >> billetes;
    sum_billetes = (billetes*20) + sum_billetes;
    cout << " 50 euros: "; cin >> billetes;
    sum_billetes = (billetes*50) + sum_billetes;
    cout << " 100 euros: "; cin >> billetes;
    sum_billetes = (billetes*100) + sum_billetes;
    cout << " 200 euros: "; cin >> billetes;
    sum_billetes = (billetes*200) + sum_billetes;
    cout << " 500 euros: "; cin >> billetes;
    sum_billetes = (billetes*500) + sum_billetes;
    cout << "\n Tienes: " << sum_billetes << " euros en billetes";

    float dinero_final = 0;
    dinero_final = (sum_centimos / 100) + sum_billetes;
    cout << "\n El dinero total que tienes es de: " << dinero_final << " euros \n";
}
