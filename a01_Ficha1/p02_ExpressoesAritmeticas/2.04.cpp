#include <iostream>
using namespace std;

int main() {
	
	int peso;
	double custo;

	cout << "Insira o peso da sua mercadoria (em gramas):  ";
	cin >> peso;

	if (peso < 500)
		custo = 5;
	else if (peso <= 1000)
		custo = 5 + 1.5 * ceil((peso - 500) / 100);
	else // pagamento extra por cada grupo de x ou fracao, dai o ceiling
		custo = 12.5 + 5 * ceil((peso - 1000) / 250);

	cout << "O custo do transporte sera de " << custo << " euros." << endl;

	return 0;
}
