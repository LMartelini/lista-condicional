#include <iostream>

using namespace std;

int main()
{
    int n1, n2, n3;

    cout << " DIGITE O PRIMEIRO NUMERO: ";
    cin >> n1;

    cout << " DIGITE O SEGUNDO NUMERO: ";
    cin >> n2;

    cout << " DIGITE O TERCEIRO NUMERO: ";
    cin >> n3;

    //ordens possíveis
    //n1 n2 n3
    //n1 n3 n2
    //n2 n1 n3
    //n2 n3 n1
    //n3 n1 n2
    //n3 n2 n1

    if (n1<n2 && n1<n3 && n2<n3){
        cout << " A ordem crescente dos numeros eh: " << n1 << ", " << n2 << ", " << n3 << endl;
    }

    else if (n1<n2 && n1<n3 && n3<n2) {
        cout << " A ordem crescente dos numeros eh: " << n1 << ", " << n3 << ", " << n2 << endl;
    }

    else if (n2<n3 && n2<n1 && n1<n3) {
        cout << " A ordem crescente dos numeros eh: " << n2 << ", " << n1 << ", " << n3 << endl;
    }

    else if (n2<n3 && n2<n1 && n3<n1) {
        cout << " A ordem crescente dos numeros eh: " << n2 << ", " << n3 << ", " << n1 << endl;
    }

    else if (n3<n1 && n3<n2 && n1<n2) {
        cout << " A ordem crescente dos numeros eh: " << n3 << ", " << n1 << ", " << n2 << endl;
    }

    else {
        cout << " A ordem crescente dos numeros eh: " << n3 << ", " << n2 << ", " << n1 << endl;
    }
}


