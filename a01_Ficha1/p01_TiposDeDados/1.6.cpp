#include <iostream>
#include <cmath>

using namespace std;
float CalcDistancia(int x1, int y1, int x2, int y2);

int main()
{
	int ax, ay, bx, by, cx, cy;
	float l1, l2, l3, s, area;
	// Ler coordendas dos vertices
	cout << "Primeiro vertice (x y) ? ";
	cin >> ax >> ay;

	cout << "Segundo vertice (x y) ? ";
	cin >> bx >> by;

	cout << "Segundo vertice (x y) ? ";
	cin >> cx >> cy;

	// Calcular comprimento dos lados
	l1 = CalcDistancia(ax, ay, bx, by);
	l2 = CalcDistancia(ax, ay, cx, cy);
	l3 = CalcDistancia(bx, by, cx, cy);
	s = (l1 + l2 + l3) / 2;

	// Cáculo da área

	area = sqrt(s*(s - l1)*(s - l2)*(s - l3));

	cout << "Area : " << area << endl;
}

float CalcDistancia(int x1, int y1, int x2, int y2)
{
	return sqrt((x2 - x1)*(x2 - x1)
		+ (y2 - y1)*(y2 - y1));
}