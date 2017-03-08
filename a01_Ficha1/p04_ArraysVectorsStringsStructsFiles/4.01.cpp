#include <iostream>
#include <cstring>

using namespace std;

bool isHydroxide(char* compound);
bool isHydroxide(string compound);

int main() {

	cout << isHydroxide("NaOH") << endl;
	cout << isHydroxide(string("NaOH")) << endl;

	return 0;
}


bool isHydroxide(char* compound) {
	size_t strl = strlen(compound);
	if(compound[strl-2]=='O' && compound[strl - 1]=='H')
		return true;
	return false;
}

bool isHydroxide(string compound) {
	size_t strl = compound.length();
	if (compound[strl - 2] == 'O' && compound[strl - 1] == 'H')
		return true;
	return false;
	return 1;
}
