#include <iostream>

using namespace std;

int main() {
	double a, b, c, d, e, f;
	// Leitura de A
	cout << "A ? ";
	cin >> a;

	// Leitura de B
	cout << "B ? ";
	cin >> b;

	// Leitura de C
	cout << "C ? ";
	cin >> c;

	// Leitura de D
	cout << "D ? ";
	cin >> d;

	// Leitura de E
	cout << "E ? ";
	cin >> e;

	// Leitura de F
	cout << "F ? ";
	cin >> f;

	cout << "x = " << (c*e - b*f) / (a*e - b*d) << "\n";
	cout << "y = " << (a*f - c*d) / (a*e - b*d) << "\n";


}
