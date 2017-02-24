#include <iostream>

using namespace std;
int main()
{
    int N, i;
    bool firstFactor = true;

    cout << "Numero ? ";

    while(!(cin >> N))
    {
        cout << "Input inválido!\n";
        cin.clear();
        cin.ignore(1000, '\n');
    } 

    for(i = 2; i <= N; i++)
    {
        if(N % i == 0)
        {
            if(firstFactor) 
            {
                cout << i;
                firstFactor = false;
            }
            else
                cout << "*" << i;

            N /= i;
            i--;
        }
    }

    cout << endl;
}