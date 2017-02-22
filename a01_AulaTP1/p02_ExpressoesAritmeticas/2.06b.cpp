#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, i, counter = 0;
    bool isPrime = true;

    /*
    ciclo que gera numeros de 1 até N. 
    counter é um contador de números primos encontrandos  
    */

    for(n = 1; counter < 101; n++) 
    {
        isPrime = true;
        
        /* Ciclo que testa se n é primo ou não */
        for(i = 2; i <= sqrt(n); i++)
        {
            if(n % i == 0)
            {
                isPrime = false;
                break;
            }
        }

        /* Se for primo, incrementamos o counter e imprimimos o números
        Se não, não fazemos nada, e o ciclo avança para o numero n+1 */
        if(isPrime)
        {
            counter++;
            cout << n << endl;
        }
        
    }
    
}