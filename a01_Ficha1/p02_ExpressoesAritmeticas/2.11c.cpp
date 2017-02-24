#include <iostream>
#include <cmath>
//#define M_E 2.71828182845904523536
#define X 10
#define N_TERMOS 100

using namespace std;
int main()
{
	double serie = 1, fatorial = 1;
	int i;

	for (i = 1; i < N_TERMOS; i++)
	{
		fatorial *= i;

		char sinal;
		(i % 2 == 0) ? sinal = 1 : sinal = -1;

		serie += sinal * pow(X, i) / fatorial;
	}

	cout << "Série : " << serie << endl;
	cout << "Resultado esperado e^(-" << X << ") = " << pow(M_E, -X) << endl;
}