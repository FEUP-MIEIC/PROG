#include <iostream>

int euclideanGCD(int n, int m);

using namespace std;

int main() {

	cout << euclideanGCD(16, 15) << endl;
	cout << euclideanGCD(30, 15) << endl;

	return 0;

}


int euclideanGCD(int n, int m) {
	if (n > m)
		swap(m, n);

	if (m % n == 0) {
		return n;
	}
	else {
		return euclideanGCD(m, m % n);
	}
}