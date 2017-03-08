#include <iostream>
#include <cstring>

using namespace std;

bool sequenceSearch(string s, int nc, char c);

int main() {

	cout << sequenceSearch("Teeeste", 3, 'e') << endl;
	cout << sequenceSearch("Teeeste", 10, 'e') << endl;
	cout << sequenceSearch("Teste", 1, 't') << endl;

	return 0;
}


bool sequenceSearch(string s, int nc, char c) {
	
	string search = "";

	for (int i = 0; i < nc; i++) {
		search.append(string(1, c));
	}

	if (s.find(search)!=string::npos)
		return true;
	else
		return false;
}
