#include <iostream>
#include <string>
#include <sstream>

using namespace std;

double executeOperation(string op) {
	stringstream ops(op);
	double op_a, op_b, res;
	char operat;

	ops >> op_a >> operat >> op_b;

	switch (operat)
	{
	case '+':
		res = op_a + op_b;
		break;
	case '-':
		res = op_a - op_b;
		break;
	case '*':
		res = op_a * op_b;
		break;
	case '/':
		res = op_a / op_b;
		break;
	default:
		cout << "Operador desconhecido!\n";
		exit(-1);
		break;
	}

	return res;
}

int main()
{
	string op;
	cout << "Type CTRL+Z to finish.\nop> ";
	while (getline(cin, op)) {
		cout << executeOperation(op) << endl;
		cout << "op> ";
	}
	
	return 0;

}
