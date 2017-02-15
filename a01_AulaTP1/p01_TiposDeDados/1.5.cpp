#include <iostream>

using namespace std;
int main()
{
	int h, m, s, d, total;

	cout << "Tempo 1 (horas minutos segundos) ? ";
	cin >> h >> d >> s;
    total = h * 3600 + d * 60 + s;

	cout << "Tempo 2 (horas minutos segundos) ? ";
	cin >> h >> d >> s;
    total += h * 3600 + d * 60 + s;

    // Calcular dias, horas, minutos e segundos
    d = total / 86400;
    total %= 86400;
    
    h = total / 3600;
    total %= 3600;

    m = total / 60;
    s = total % 60;
    //Output

    cout << "Soma dos tempos: " << d << " dia, "
    << h << " horas, " << m << " minutos e " << s << " segundos" << endl;
    
	
}