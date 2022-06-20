#include <iostream>

using namespace std;

int main()
{
    float n1, n2;

    cout << "Digite um numero: ";
    cin >> n1;

    cout << "Digite outro numero: ";
    cin >> n2;

    if(n1 > n2){
        cout << " O MAIOR NUMERO DIGITADO EH: " << n1 << endl;
    }

    else{
        cout << " O MAIOR NUMERO DIGITADO EH: " << n2 << endl;
    }
}
