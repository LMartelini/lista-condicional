#include <iostream>

using namespace std;

int main()
{
    float peso, altura, massa;

    cout << " ------------------------- " << endl;
    cout << " CALCULO DE MASSA CORPORAL " << endl;
    cout << " ------------------------- " << endl;

    cout << " Digite o valor de seu peso corporal: ";
    cin >> peso;

    cout << " Digite o valor da sua altura: ";
    cin >> altura;

    massa = peso / (altura*altura);

    if (massa<26) {
        cout << " GRAU DE OBESIDADE: NORMAL " << endl;
    }

    else {
        if (massa>=26 && massa<30) {
           cout << " GRAU DE OBESIDADE: OBESO " << endl;
        }

        else {
        cout << " GRAU DE OBESIDADE: OBESO MORBIDO " << endl;
      }
    }
}
