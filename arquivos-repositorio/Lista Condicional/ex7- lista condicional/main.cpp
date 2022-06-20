#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char apto, nome[100];
    int diarias, valor_diaria, valor_total_diaria;
    float consumo_int, subtotal, taxa, total_geral;


    cout << " Digite seu nome: ";
    cin >> nome;

    cout << " Digite o tipo de apartamento utilizado: ";
    cin >> apto;

    cout << " Digite o numero de diarias utilizadas: ";
    cin >> diarias;

    cout << " Digite o valor do consumo interno no hotel: ";
    cin >> consumo_int;

    if (apto=='A' || apto=='B' || apto=='C' || apto=='D') {


    if (apto=='A') {
        valor_diaria = 150;
        valor_total_diaria = diarias * valor_diaria;
        subtotal = valor_total_diaria + consumo_int;
        taxa = 0.1 * subtotal;
        total_geral = taxa + subtotal;
        }

    else if (apto=='B') {
            valor_diaria = 100;
            valor_total_diaria = diarias * valor_diaria;
            subtotal = valor_total_diaria + consumo_int;
            taxa = 0.1 * subtotal;
            total_geral = taxa + subtotal;
        }

        else if (apto=='C') {
                 valor_diaria = 75;
                 valor_total_diaria = diarias * valor_diaria;
                 subtotal = valor_total_diaria + consumo_int;
                 taxa = 0.1 * subtotal;
                 total_geral = taxa + subtotal;

        }

        else if(apto=='D') {
                valor_diaria = 50;
                valor_total_diaria = diarias * valor_diaria;
                subtotal = valor_total_diaria + consumo_int;
                taxa = 0.1 * subtotal;
                total_geral = taxa + subtotal;
            }



        cout << " NOME DO HOSPEDE: " << nome << endl;
        cout << " TIPO DO APARTAMENTO: " << apto << endl;
        cout << " NUMERO DE DIARIAS UTILIZADAS: " << diarias << endl;
        cout << " VALOR UNITARIO DA DIARIA: " << valor_diaria << endl;
        cout << " VALOR TOTAL DAS DIARIAS: " << valor_total_diaria << endl;
        cout << " VALOR DO CONSUMO INTERNO: " << consumo_int << endl;
        cout << " VALOR DO SUBTOTAL: " << subtotal << endl;
        cout << " VALOR DA TAXA: " << taxa << endl;
        cout << " VALOR DO TOTAL GERAL: " << total_geral << endl;

    }

    else {
        cout << " TIPO DO APARTAMENTO NAO ENCONTRADO! " << endl;
    }

}
