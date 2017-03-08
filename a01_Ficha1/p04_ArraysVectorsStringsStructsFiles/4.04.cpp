#include <iostream>
#include <string>
#include <vector>

using namespace std;

string normalizeName(string name);

int main() {

	cout << normalizeName("a rosa do vasco tem           espinhos amarelos e roxos. ") << endl;

	return 0;
}

string normalizeName(string name) {
	for (int i = 0; i < name.length(); i++) {
		name[i] = toupper(name[i]);
	}

	vector<string> part = { "DE", "DO", "DA", "DAS", "DOS", "E" };

	for each (string str in part)
	{
		str = ' ' + str + ' ';
		while (1) {
			size_t a=name.find(str);
			if (a == string::npos)
				break;
			else
				name.replace(a, str.length(), " ");
		}
	}

	for (int i = 0; i < name.length(); i++) {
		if (name[i] == ' ') {	// Remoção de espaços consecutivos.
			for (int j = i + 1; name[j] == ' '; ) {
				name.erase(j, 1);
			}
		}
	}


	if (name[0] == ' ') { // Remover primeiro espaço, se existir
		name.erase(0, 1);
	}

	if (name[name.length() - 1] == ' ') { // Remover último espaço, se existir
		name.erase(name.length() - 1, 1);
	}

	return name;
}
