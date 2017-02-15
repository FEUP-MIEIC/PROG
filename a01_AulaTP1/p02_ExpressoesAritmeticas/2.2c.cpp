#include <iostream>

using namespace std;

void swap(double* a, double* b){
	double t = *a;
	*a = *b;
	*b = t;
}

int main() {

	double n1, n2, n3;

	// Leitura de n1
	cout << "Lado 1 ? ";
	cin >> n1;

	// Leitura de n2
	cout << "Lado 2 ? ";
	cin >> n2;

	// Leitura de n3
	cout << "Lado 3 ? ";
	cin >> n3;

	if (n2 > n1)
		swap(&n1, &n2);
	if (n3 > n1)
		swap(&n3, &n1);

	if (n1 >= (n2 + n3)) {
		cout << "Triangulo Impossivel!\n";
	}
	else {
		cout << "Triangulo Possivel!\n";
	}
}
