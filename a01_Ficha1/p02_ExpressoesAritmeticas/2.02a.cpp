#include <iostream>

using namespace std;

int main() {

	int n1, n2, n3;

	// Leitura de n1
	cout << "N1 ? ";
	cin >> n1;

	// Leitura de n2
	cout << "N2 ? ";
	cin >> n2;

	// Leitura de n3
	cout << "N3 ? ";
	cin >> n3;

	int nmax=n1, nmin=n1;

	if (n2 > nmax)
		nmax = n2;
	
	if (n3 > nmax)
		nmax = n3;

	if (n2 < nmin)
		nmin = n2;
	if (n3 < nmin)
		nmin = n3;

	cout << "Min: " << nmin << "\n";
	cout << "Max: " << nmax << "\n";


}
