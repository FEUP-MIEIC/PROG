#include <iostream>

using namespace std;

int main() {

	int peso; // em gramas
	double custo;

	cout << "Peso: ";
	cin >> peso;

	if (peso < 500) {
		cout << "Custo: 5euros\n";
		return 0;
	}
	else if (peso <= 1000) {
		peso -= 500-1;
		custo = 5 + (1.5 * (peso / 100));
		cout << "Custo: "<< custo << "euros\n";
		return 0;
	}
	else {
		peso -= 1000-1;
		custo = 12.5 + (5 * (peso / 250));
		cout << "Custo: " << custo << "euros\n";
		return 0;
	}
}
