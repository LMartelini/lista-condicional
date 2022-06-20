#include <iostream>

using namespace std;

int main()
{
    float n1, n2, n3, media;

    cout << " Digite sua primeira nota: ";
    cin >> n1;

    cout << " Digite sua segunda nota: ";
    cin >> n2;

    cout << " Digite sua terceira nota: ";
    cin >> n3;

    media = (n1 + n2 + n3) / 3;

    if (media>=8) {
        cout << " Sua media final sera: " << media << endl;
        cout << " CONCEITO: A " << endl;
    }

    else {
        if (media >=5 && media <8) {
            cout << " Sua media final sera: " << media << endl;
            cout << " CONCEITO: B " << endl;
        }
        else {
            cout << " Sua media final sera: " << media << endl;
            cout << " CONCEITO: C " << endl;
        }
    }


}
