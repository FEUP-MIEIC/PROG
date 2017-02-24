#include <iostream>
#include <cmath>

using namespace std;
double distance(int x1, int y1, int x2, int y2);
double area(int x1, int y1, int x2, int y2, int x3, int y3);

int main()
{
	int ax, ay, bx, by, cx, cy;
	double areaT;
	// Ler coordendas dos vertices
	cout << "Primeiro vertice (x y) ? ";
	cin >> ax >> ay;

	cout << "Segundo vertice (x y) ? ";
	cin >> bx >> by;

	cout << "Segundo vertice (x y) ? ";
	cin >> cx >> cy;

	// Cáculo da área

	areaT = area(ax, ay, bx, by, cx, cy);

	cout << "Area : " << areaT << endl;
}

double distance(int x1, int y1, int x2, int y2)
{
	return sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
}

double area(int x1, int y1, int x2, int y2, int x3, int y3) {
	double l1, l2, l3, s;
	// Calcular comprimento dos lados
	l1 = distance(x1, y1, x2, y2);
	l2 = distance(x1, y1, x3, y3);
	l3 = distance(x2, y2, x3, y3);
	s = (l1 + l2 + l3) / 2;
	return sqrt(s*(s - l1)*(s - l2)*(s - l3));
}