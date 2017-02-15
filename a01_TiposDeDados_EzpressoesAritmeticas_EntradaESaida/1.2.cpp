#include <iostream>

using namespace std;

int main() {
	int a, b, c;
	float media, desvioA, desvioB, desvioC;

	// Leitura de A
	cout << "A ? ";
	cin >> a;

	// Leitura de B
	cout << "B ? ";
	cin >> b;

	// Leitura de C
	cout << "C ? ";
	cin >> c;

	// Cálculo da média
	media = (a + b + c) / 3.0;

	//Cálculo dos desvios
	desvioA = a - media;
	desvioB = b - media;
	desvioC = c - media;

	// Impressão de resultados

	cout << "media	= " << media	<<"\n";
	cout << "A-media	= " << desvioA << "\n";
	cout << "B-media	= " << desvioB << "\n";
	cout << "C-media	= " << desvioC << "\n";

	return 0;
}
