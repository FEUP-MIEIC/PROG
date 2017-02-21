#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
int main()
{
    srand(time(NULL));

    while(true)
    {
        int n1, n2, resposta, rand1, rand2;
        double s;
        n1 = rand() % 9 + 2; // Gera numeros entre 2 e 9
        n2 = rand() % 9 + 2;

        cout << n1 << " * " << n2 << " (Ctrl-D/Z para desistir) ? ";

        time_t startTime = time(NULL); //Obtem tempo atual - inicio
        cin >> resposta;
        if(cin.eof()) break;
        time_t endTime = time(NULL); //Obtem tempo atual -fim

        s = difftime(endTime, startTime); // Diferença de tempo em segundos
        
        if (resposta != n1*n2)
            cout << "Muito Mau! Está chumbado Manel!\n"; 
        else if (s < 5)
            cout << "Bom!\n";
        else if (s >= 5 && s <= 10)
            cout << "Satisfaz!\n";
        else 
            cout << "Insatisfaz!\n";
    }

    cout << endl;

    return 0;
}
