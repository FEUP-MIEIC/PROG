#include <iostream>
#define N_TERMOS 8

using namespace std;
int main()
{
	int i, fatorial = 1;
	double neper = 1, oldNeper=100, precisao;
	cout << "Precisao: ";
	cin >> precisao;
	for (i = 1; abs(oldNeper - neper)>precisao; i++)
	{
		oldNeper = neper;
		fatorial *= i;
		neper += 1.0 / fatorial;
	}

	cout << "Número Neper : " << neper << endl;
}