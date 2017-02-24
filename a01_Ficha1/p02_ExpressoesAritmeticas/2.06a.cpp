#include <iostream>
#include <cmath> //necessário para compilar em Linux

using namespace std;

int main() {
	int n;

	cout << "Insira um inteiro positivo: ";
	if (!(cin >> n)) {
		cout << "Ocorreu um erro na leitura!\n";
		return 1;
	}
	int i=n-1;
	bool prime = true;
	while (i >= floor(sqrt(n))) {
		if (n%i == 0) {
			prime = false;
			break;
		}
		i--;
	}

	if (prime) {
		cout << n << " e' primo\n";
	}
	else {
		cout << n << " nao e' primo\n";
	}

	return 0;
}
