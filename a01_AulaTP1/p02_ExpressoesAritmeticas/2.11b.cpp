#include <iostream>
#define N_TERMOS 8

using namespace std;
int main()
{
    int i, fatorial = 1;
    double neper = 1;
    cout << "hey\n";
    for(i = 1; i <= N_TERMOS; i++)
    {
        fatorial *= i;
        neper += 1.0/fatorial;
    } 

    cout << "Número Neper : " << neper << endl;
}