#include <iostream>
#include <climits>

long factorial_ite(int n);
long factorial_rec(int n);

using namespace std;

int main() {

	long factLimit = LONG_MAX;
	long res = factorial_rec(5);
	int a;
	int n = 0;
	while (factorial_rec(n) > 0) {
		n++;
	}

	n--;

	cout << "Valor a calcular: ";

	cin >> a;
	while (a > n) {
		cout << "O valor deve ser inferior a "<< n <<"!\n";
		cout << "Valor a calcular: ";
		cin >> a;
	}

	cout << factorial_rec(a) << endl;


	return 0;

}


long factorial_rec(int n) {
	if (n <=1) {
		return 1;
	}
	else {
		return n*factorial_rec(n - 1);
	}
}

long factorial_ite(int n) {
	long m = 1;
	while (n>1) {
		m = m*n;
		n--;
	}
	return m;
}