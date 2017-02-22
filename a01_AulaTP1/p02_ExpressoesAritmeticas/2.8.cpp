#include <iostream>
using namespace std;

int main()
{
	int n;
	double q, j;

	cout << "Q: ";
	cin >> q;
	cout << "N: ";
	cin >> n;
	cout << "j: ";
	cin >> j;

	for(int i = 0; i < n; i++) {
		q = q + q*j/100;
	}

	cout << "Quantia Final :" << q << endl;
}
