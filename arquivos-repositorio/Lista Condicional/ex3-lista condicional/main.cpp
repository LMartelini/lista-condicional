#include <iostream>

using namespace std;

int main()
{
    float cod, preco, quantidade, total;

    cout << " Digite seu codigo de consumidor: ";
    cin >> cod;

    cout << "Digite o preco do kwh: ";
    cin >> preco;

    cout << " Digite a quantidade de kwh consumida: ";
    cin >> quantidade;

    total = preco * quantidade;

    if (total<11.20) {
       cout << " VOCE NAO ATINGIU O TOTAL MINIMO A PAGAR " << endl;
    }

    else
        cout << " SEU CODIGO EH: " << cod << "\n E SEU TOTAL A PAGAR EH: " << total << endl;

}
