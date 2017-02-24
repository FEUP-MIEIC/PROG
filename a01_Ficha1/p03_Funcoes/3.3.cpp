#include <iostream>
#include <cmath>
using namespace std;
double altSqrt(double n, double delta, int maxIter);

int main()
{
	int maxIter;
	double delta, n;

	cout << "Numero ? ";
	cin >> n;

	cout << "Numero maximo de iteracoes ? ";
	cin >> maxIter;

	cout << "Precisao ? ";
	cin >> delta;

	cout << "Resultado obtido com o Algoritmo : " << altSqrt(n, delta, maxIter) << endl;
	cout << "Resultado esperado : " << sqrt(n) << endl;
}

double altSqrt(double n, double delta, int maxIter) {
	double RaizOld = 1, RaizNew = 999;
	for (int i = 0; i < maxIter && abs(RaizNew*RaizNew - n) > delta; i++)
	{
		RaizNew = (RaizOld + n / RaizOld) / 2;
		RaizOld = RaizNew;
	}
	return RaizNew;
}