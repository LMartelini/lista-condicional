#include <iostream>

using namespace std;

int main()
{
   char nome[100];
   float sal_atual, novo_sal;

   cout << " Digite seu nome: ";
   cin >> nome;

   cout << " Digite seu salario atual: ";
   cin >> sal_atual;

   if (sal_atual<=1000) {
        novo_sal = (0.2 * sal_atual) + sal_atual;
    }

   else {
       if (sal_atual>=1001 && sal_atual<5000) {
            novo_sal = (0.1 * sal_atual) + sal_atual;
        }
       else {
            novo_sal = sal_atual;
        }

   }

   cout << nome << " seu salario atual eh de: " << sal_atual << " e seu novo salario sera de: " << novo_sal << endl;
}
