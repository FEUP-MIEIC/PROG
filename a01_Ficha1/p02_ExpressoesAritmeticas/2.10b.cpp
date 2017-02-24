#include <iostream>
#include <cmath>
#include <limits>
using namespace std;

int NumLength(int n);

int main()
{
    int n, len, i;
    bool capicua = true;

    
    cout << "Numero ? ";
    while(!(cin >> n))
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');    
        cout << "Manel, input inválido!\nNumero ? ";
    }

    for(i = 1; i <= len/2; i++)
    {
        int lsd = n % (int)pow(10, i); //Apesar de aqui saber-se que o pow vai sempre retornar inteiros, o typecast é só para calar o compilador...
        int msd = n / pow(10, len-i);
        if(lsd != msd)
        {
            capicua = false;
            break;
        }

        /* Explicação 
        
            O algoritmo recorre a uma função, NumLength, que determina quantos digitos tem o numero. Este ciclo, vai comparando os digitos
        do numero introduzindo, começando por comparar os extremos. Para tal, recorre-se a operações de módulo e divisão com potências de 10.

            Exemplo: 12345. O numero tem 5 digitos, logo o ciclo faz 2 iterações (o digito 3 não será comparado com nada, não é preciso!). O ciclo começa por comparar
        os extremos, 1 (= 12345 / 10^4) e 5 (= 12345 mod 10). Como os numeros são diferentes o ciclo pára, mas se fossem iguais, numa segunda iteração eram comparados
        os digitos 2 (o segundo mais significativo : msd = 12345 / 10^3) com 4 (segundo menos significativo : lsd = 12345 mod 10^2).
        
        */
    }

    if(capicua)
        cout << "O numero É capicua!\n";
    else
        cout << "O numero NÃO É capicua!\n";


}

int NumLength(int n)
{
    int i, counter = 0;
    for(i = 1; n/i != 0; i*=10, counter++);

    /*
        Enquanto a divisão inteira por potências de 10 (10, 100, 1000...) 
    é diferente de zero, incrementa o contador de digitos
    */
    return counter;
}