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

	//Determinar se o sistema é indeterminado (ocorre se um dos numeradores for zero)

	if ((c*e - b*f) == 0.0 || (a*f - c*d)==0.0) {
		cout << "Sistema Indeterminado!\n\n";
		return 1;
	}

	//Determinar se o sistema é impossível (ocorre se o denominador for igual a zero)

	if ((a*e - b*d) == 0.0) {
		cout << "Sistema Impossivel!\n\n";
		return 1;
	}

	cout << "x = " << (c*e - b*f) / (a*e - b*d) << "\n";
	cout << "y = " << (a*f - c*d) / (a*e - b*d) << "\n";


}
