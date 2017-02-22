#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double rad, inc, i, rangeMin, rangeMax;

    cout << "Intervalo [min max] ? ";
    cin >> rangeMin >> rangeMax;

    cout << "Incremento do angulo ? ";
    cin >> inc;

    // setup
    cout << setprecision(6) << fixed; // Imprimir com 6 casas decimais
    cout << "ang\tsen\tcos\ttan\n"; // \t -> tab

    for(i = rangeMin; i <= rangeMax; i += inc)
    {
        // as funções trignométricas aceitam argumentos em radianos
        rad = i * M_PI / 180;
        cout << i << "\t" << sin(rad) << "\t" << cos(rad) << "\t";

        
        if((int)i % 90 == 0) // TODO : e.g se o angulo for 90.1
            cout << "infinito\n";
        else 
            cout << tan(rad) << endl;
    }
}