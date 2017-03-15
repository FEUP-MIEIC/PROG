#include <iostream>
#include <iomanip>
using namespace std;


struct Fraction {
	int numerator;
	int denominator;
};

Fraction readFracc();
Fraction reduceFracc(Fraction f);
void writeFracc(Fraction f);
Fraction AddFraction(Fraction f1, Fraction f2);
Fraction SubFraction(Fraction f1, Fraction f2);
Fraction MultFraction (Fraction f1, Fraction f2);
Fraction DivFraction (Fraction f1, Fraction f2);
int gcdEuclidean(int a, int b);

int main()
{
	int i = 1;
	char op;

	cout << setw(100) << setfill('*') << " \n";
	cout << "Operação #" << i << " (use CTRL-D/Z para terminar OU outra tecla para continuar)";
    cin.get();
	while (!cin.eof())
	{
		Fraction f1, f2, fr;

        /* Reads first fraction */
		f1 = readFracc();

        /* Reads second fraction */
		f2 = readFracc();

        /* Asks for operation */
		cout << "Operação (+ - * /) ? ";
		
        while(!(cin >> op))
        {
            cout << "Operação inválida! Introduza novamente (+ - / *) ? ";
        }

        /* Calculate and prints the result */
        cout << "Resultado : ";
		switch (op)
		{
		case '+':
			writeFracc(AddFraction(f1, f2));
            break;
        case '-':
            writeFracc(SubFraction(f1, f2));
            break;
        case '*':
            writeFracc(MultFraction(f1, f2));
            break;
        case '/':
            writeFracc(DivFraction(f1, f2));
            break;
		}

        /* Prepares next iteration and cleans buffer */
        i++;
        cin.ignore(1000, '\n');
		cout << setw(100) << setfill('*') << " \n";
		cout << "Operação #" << i << " (use CTRL-D/Z para terminar OU outra tecla para continuar)";
        cin.get();

	}
}

/* Reads a fraction from input stream and returns struct Fraction */
Fraction readFracc()
{
	char op;
	Fraction f;

	cout << "Introduza uma fração (N/D) ? ";
	while (!(cin >> f.numerator >> op >> f.denominator) || f.numerator >= f.denominator || f.denominator == 0 || op != '/')
	{
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "Input inválido\n";
		}

		else if (f.numerator >= f.denominator || f.denominator == 0)
			cout << "Fração inválida ou syntaxe incorreta. Uma fração não pode ter numerador superior ou igual ao denominador, e o denominador não pode ser zero!\n";

		else if (op != '/')
			cout << "Syntaxe incorreta. Deve usar N/D, sendo que N -> numerador e D -> denominador, ambos valores inteiros.\n";

		else return f;

		cout << "Introduza uma fração (N/D) ? ";

	}

	return f;
}


/* Prints a fraction (N/D) */

void writeFracc(Fraction f)
{
    if(f.numerator == f.denominator)
        cout << 1 << endl;
    else if(f.numerator == 0)
        cout << 0 << endl;
    else
        cout << f.numerator << '/' << f.denominator << endl;
}


/* Reduces a fraction  */
Fraction reduceFracc(Fraction f)
{
	Fraction fr = f;

	int gcd = gcdEuclidean(fr.numerator, fr.denominator);

	fr.numerator /= gcd;
	fr.denominator /= gcd;

	return fr;
}

/* Find and return the greatest common divisor for 'a' and 'b' */
int gcdEuclidean(int a, int b)
{
	int aux;
	while (b != 0)
	{
		aux = b;
		b = a % b;
		a = aux;
	}

	return a;
}

/* Gets two fractions, adds them, reduces the result and returns the resultant fraction .
F3 = reduceFracc(F1+F2) */
Fraction AddFraction(Fraction f1, Fraction f2)
{
	Fraction fr;

	if (f1.denominator == f2.denominator)
	{
		fr.denominator = f1.denominator;
		fr.numerator = f1.numerator + f2.numerator;

		return reduceFracc(fr);
	}
	else
	{
		/* num1 * den2 + num2 * den1 */
		fr.numerator = f1.numerator*f2.denominator + f2.numerator*f1.denominator;
		fr.denominator = f1.denominator * f2.denominator;

		return reduceFracc(fr);
	}
}

/* Gets two fractions, subtracts and reduces the result.
F1 = reduceFracc(F1-F2) */
Fraction SubFraction (Fraction f1, Fraction f2)
{
    Fraction fr;

	if (f1.denominator == f2.denominator)
	{
		fr.denominator = f1.denominator;
		fr.numerator = f1.numerator - f2.numerator;

		return reduceFracc(fr);
	}
	else
	{
		fr.numerator = f1.numerator*f2.denominator - f2.numerator*f1.denominator;
		fr.denominator = f1.denominator * f2.denominator;

		return reduceFracc(fr);
	}
}

/* Gets two fractions, F1 and F2, multiples and reduces the resultant fraction.
F1 = readFracc(F1*F2) */
Fraction MultFraction (Fraction f1, Fraction f2)
{
    f1.numerator *= f2.numerator;
    f1.denominator *= f2.denominator; 

    return reduceFracc(f1);
}

Fraction DivFraction (Fraction f1, Fraction f2)
{
    f1.numerator *= f2.denominator;
    f1.denominator *= f2.numerator; 
    
    return reduceFracc(f1);
}