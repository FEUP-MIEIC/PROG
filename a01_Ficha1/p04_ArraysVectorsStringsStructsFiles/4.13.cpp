#include <iostream>
#include <vector>
#include <fstream>
#include <string>

using namespace std;

void bubbleSort(vector<string> &v) {
	int limite = v.size();
	int troca = INT_MAX;
	while (troca>0) {
		troca = 0;
		for (int j = 0; j<limite - 1; j++) {
			if (v[j]>v[j + 1]) {
				string x = v[j];
				v[j] = v[j + 1];
				v[j + 1] = x;
				troca = j;
			}
		}
		limite = troca + 1;
	}
	return;
}

void readFile(vector<string> &lista)
{
	ifstream in_file("names.txt");
	if (!in_file.good()) {
		cout << "Error opening file \"names.txt\".\n";
		exit(-1);
	}
	while (!in_file.eof())
	{
		string aux;
		getline(in_file, aux);
		lista.push_back(aux);
	}
	in_file.close();
	return;
}

void writeFile(vector<string> &lista)
{
	ofstream out_file("names_sorted.txt");
	for (unsigned int i = 0; i < lista.size(); i++) {
		out_file << lista[i] << endl;
	}
	out_file.close();
	return;
}

int main()
{
	vector<string> lista;

	//readIntVector(a);

	readFile(lista);
	bubbleSort(lista);
	writeFile(lista);

	cout << "Done!\n";

	return 0;

}
