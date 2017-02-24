#include <iostream>
#include <cmath>
using namespace std;

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

    for(i = 0; i < maxIter && abs(RaizNew*RaizNew - num) > delta; i++)
    {
        RaizNew = (RaizOld + num / RaizOld) / 2;
        RaizOld = RaizNew; 
    }

    cout << "Resultado obtido com o Algoritmo : " << RaizNew << endl;
    cout << "Resultado esperado : " << sqrt(num) << endl;
}