#include <iostream>
#include <cmath> //necessário para compilar em Linux

using namespace std;

int main() {
	int n=1;
	bool prime=true;
	while (n <= 100) {
		int i = n - 1;
		while (i >= floor(sqrt(n))) {
			if (n%i == 0) {
				prime = false;
				break;
			}
			i--;
		}
		if(prime)
			cout << n << " ";
		n++;
		prime = true;
	}
	cout << "\n";
	return 0;
}
