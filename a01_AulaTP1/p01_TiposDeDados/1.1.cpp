#include <iostream>

using namespace std;

int main() {
	char a;

	a=getc(stdin); // A função GetChar permite ler carateres como ' '(espaço).
	cout << static_cast<int>(a) << "\n";

	return 0;
}
