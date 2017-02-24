#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n, counter = 0, max = INT_MIN, min = INT_MAX, sum = 0;
    cout << "Insira uma sequência de números ( 0 - terminar)\n";

    while(true)
    {
        cout << "n ? ";
        cin >> n;

        if(!n) break; //Se for zero terminar

        // atualizar dados
        if (n < min) min = n;
        if (n!= 0 && n > max) max = n;
        counter++;
        sum += n;
    }

    if (!counter) return 0; //Não existem dados, termina o programa

    cout << "A sequência tem " << counter << " numeros\n";
    cout << "Valor máximo: " << max << endl;
    cout << "Valor minimo: " << min << endl;
    cout << "Soma: " << sum << endl;
    cout << "Média é: " << (float) sum / counter << endl;

    return 0;
}