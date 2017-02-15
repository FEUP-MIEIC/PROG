#include <iostream>

using namespace std;
int main()
{
	int h1, h2, h, m1, m2, m, s1, s2, s, d;

	int h_sum, m_sum, s_sum;

	cout << "Tempo 1 (horas minutos segundos) ? ";
	cin >> h1 >> m1 >> s1;

	cout << "Tempo 2 (horas minutos segundos) ? ";
	cin >> h2 >> m2 >> s2;

	// variaveis auxiliares para organizar o código...
	h_sum = h1 + h2;
	m_sum = m1 + m2;
	s_sum = s1 + s2;

    // Cálculo de segundos, minutos, horas, dia
	s = s_sum % 60;
	m = (m_sum + s_sum / 60) % 60;
	h = (h_sum + m_sum / 60) % 24;
	d = h_sum / 24;

    //Output
	cout << "Soma dos tempos: " << d << " dia, "
		<< h << " horas, " << m << " minutos e "
		<< s << " segundos\n";


	// TODO: tentar reduzir quantidade de variáveis
}