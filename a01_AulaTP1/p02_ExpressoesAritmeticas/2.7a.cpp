#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int i;
    double rad;
    cout << setprecision(6) << fixed; // Imprimir com 6 casas decimais
    cout << "ang\tsen\tcos\ttan\n"; // \t -> tab
    for(i = 0; i <= 90; i += 15)
    {
        // as funções trignométricas aceitam argumentos em radianos
        rad = i * M_PI / 180;
        cout << i << "\t" << sin(rad) << "\t" << cos(rad) << "\t";

        if(i == 90)
            cout << "infinito\n";
        else 
            cout << tan(rad) << endl;
    }
}