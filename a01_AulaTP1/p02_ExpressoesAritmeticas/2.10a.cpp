#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Digite um número de três digitos : ";
    cin >> num;

    if(num % 10 == num / 100)
        cout << "É capicua!\n";
    else
        cout << "Não é capicua!\n";
}