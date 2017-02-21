#include <iostream>
using namespace std;

int main()
{
    double q, j;
    int anos;
    cout << "Valor do depósito (euros) ? ";
    cin >> q;
    cout << "Quantos anos tem o depósito ? "
    cin >> anos;
    cout << "Taxa de juros anual (%) ? ";
    cin >> juros;

    for(; anos > 0; anos--)
        q += q*j/100;
    
    cout << ""
}