#include <iostream>
#include <cmath>

using namespace std;

double round(double x, unsigned n)
{
    int power = pow(10,n);
    return floor(x*power + 0.5)/power;
}

int main()
{
    double num;
    unsigned int decPlaces;

    cout << "Número a arredondar ? ";
    cin >> num;

    cout << "Quantas casas decimais ? ";
    cin >> decPlaces;

    cout << round(num, decPlaces) << endl;
}

