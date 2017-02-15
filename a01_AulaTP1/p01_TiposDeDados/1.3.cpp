#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	double ro, raio;

	cout << "Introduza o valor de ro (Kg/m^3) ? ";
	cin >> ro;

	cout << "Introduza o valor do raio (m^3) ? ";
	cin >> raio;

	cout << "Massa da esfera e': " << 4 / 3 * ro * pow(raio, 3) * M_PI << " Kg\n";
}

// Alternativa sem usar bibliotecas matemáticas seria 4 / 3 * ro * raio * raio * raio * 3.14