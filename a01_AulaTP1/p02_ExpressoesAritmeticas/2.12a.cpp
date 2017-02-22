#include <iostream>

using namespace std;
#define N_TERMOS 6000
int main()
{
	double pi = 0, oldPi=100, precisao;
	cout << "Precisao: ";
	cin >> precisao;
	int den, termo;
	for (den = 1, termo = 1; abs(oldPi-pi)>precisao; den += 2, ++termo)
	{
		oldPi = pi;
		(termo % 2 == 0) ? pi += 4.0 / den * -1 : pi += 4.0 / den;

	}

	cout << "Serie (PI) : " << pi << endl;
}
