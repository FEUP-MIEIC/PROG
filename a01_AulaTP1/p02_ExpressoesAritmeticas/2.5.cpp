#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double a, b, c, binomio, raiz1, raiz2, real, complexo;

    cout << "Introduza os coeficientes (a b c) ? ";
    cin >> a >> b >> c;

    binomio = b*b - 4 * a * c;

    cout << setprecision(3) << fixed; // Sets decimal precision
    if (binomio > 0)
    {
        raiz1 = (- b - sqrt(binomio)) / (2*a);
        raiz2 = (- b + sqrt(binomio)) / (2*a);

        cout << "Raizes reais: " << raiz2 << " e " << raiz1 << endl;
    }
    else if (binomio < 0)
    {
        complexo = sqrt(abs(binomio)) / (2*a);
        real  = - b/(2*a);
        cout << "Raizes complexas: " << real << " + " << raiz1 << "i"
        " e " << real << " - " << raiz1 << "i" << endl;
    }
    else
    {
        cout << "Raiz dupla: " << (-b + sqrt(binomio)) / (2*a) << endl;
    }
}