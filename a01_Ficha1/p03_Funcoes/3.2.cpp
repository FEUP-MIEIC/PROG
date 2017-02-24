#include <iostream>
#include <cmath> //necessário para compilar em Linux

using namespace std;

bool isPrime(int n);


int main() {
	int n = 1;
	while (n <= 10000) {
		if (isPrime(n))
			cout << n << "\n";
		n++;
	}
	cout << "\n";
	return 0;
}

bool isPrime(int n) {
	int i = n - 1;
	while (i >= floor(sqrt(n))) {
		if (n%i == 0) {
			return false;
		}
		i--;
	}
	return true;
}