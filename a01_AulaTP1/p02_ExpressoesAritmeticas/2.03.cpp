#include <iostream>

using namespace std;

int main() {
	double op1, op2;
	char op;
	cout << "Insira uma operacao:\n";
	cin >> op1 >> op >> op2;
	
	switch (op) {
	case '+':
		cout << op1 << " + " << op2 << " = " << op1 + op2 << "\n";
		break;
	case '-':
		cout << op1 << " - " << op2 << " = " << op1 - op2 << "\n";
		break;
	case '*':
		cout << op1 << " * " << op2 << " = " << op1 * op2 << "\n";
		break;
	case '/':
		cout << op1 << " / " << op2 << " = " << op1 / op2 << "\n";
		break;
	}
}
