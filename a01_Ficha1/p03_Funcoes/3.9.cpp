#include <iostream>

double integrateTR(double f(double), double a, double b, int n);
double f(double x);
double g(double x);

using namespace std;


int main() {

	cout << integrateTR(f, -2, 2, 100) << endl;
	cout << integrateTR(g, -2, 2, 100) << endl;

	return 0;

}

double f(double x) {
	return x*x;
}


double g(double x) {
	return sqrt(4-x*x);
}



double integrateTR(double f(double), double a, double b, int n) {
	double h = (b - a) / n;
	double sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += h / 2 * (f(a + (i - 1)*h) + f(a + i*h));
	}

	return sum;
}