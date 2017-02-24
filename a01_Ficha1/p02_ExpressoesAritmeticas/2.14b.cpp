#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int FindPrecision(double n);

int main()
{
    int maxIter, i;
    double delta, RaizOld = 1, RaizNew, num;

    cout << "Numero ? ";
    cin >> num;

    cout << "Numero maximo de iterações ? ";
    cin >> maxIter;

    cout << "Precisao ? ";
    cin >> delta;
    cout << setprecision(FindPrecision(delta)) << fixed;

    for(i = 0; i < maxIter && abs(RaizNew*RaizNew - num) > delta; i++)
    {
        RaizNew = (RaizOld + num / RaizOld) / 2;
        RaizOld = RaizNew; 
    }

    cout << "Resultado obtido com o Algoritmo : " << RaizNew << endl;
    cout << "Resultado esperado : " << sqrt(num) << endl;
}

int FindPrecision(double n)
{
    int Power10 = 10, i;
    for(i = 1; n * Power10 < 1.0; i++, Power10 *= 10);

    return i;
}