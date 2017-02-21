#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n, i, counter, max = INT_MIN, min = INT_MAX, sum = 0;
    cout << "Qual o tamanho da sequência ? ";
    cin >> counter;

    if (counter <= 0) return 0; // tamanho inválido

    for(i = 0; i < counter; i++)
    {
        cout << "n ? ";
        cin >> n;
        if (n < min) min = n;
        if (n!= 0 && n > max) max = n;
        sum += n;
    }

    cout << "Valor máximo: " << max << endl;
    cout << "Valor minimo: " << min << endl;
    cout << "Soma: " << sum << endl;
    cout << "Média é: " << (float) sum / counter << endl;

    return 0;
}