#include <iostream>
#include <cstring>

using namespace std;

void decompose(string compound);

int main() {

	decompose("C9H8O4PH");

	return 0;
}

void decompose(string compound) {
	int i = 0;
	char aux[2];
	aux[1]='\0';
	while (compound[i] != '\0') {
		aux[0] = compound[i];//}
		if (atoi(aux) != 0) {
			cout << endl;
		}
		else {
			cout << compound[i];
		}
		i++;
	}
	cout << endl;
	return ;
}

