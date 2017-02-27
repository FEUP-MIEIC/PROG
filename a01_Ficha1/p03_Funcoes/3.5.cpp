#include <iostream>
using namespace std;

bool readFracc(int &numerator, int &denominator);
void writeFracc(int numerator, int denominator);
void reduceFracc(int &numerator, int &denominator);
int gcdEuclidean(int a, int b);
void AddFraction (int &N1, int &D1, int N2, int D2);
void SubFraction (int &N1, int &D1, int N2, int D2);
void MultFraction (int &N1, int &D1, int N2, int D2);
void DivFraction (int &N1, int &D1, int N2, int D2);

int main()
{
    int numerator1, numerator2, denominator1, denominator2;
    char op;

    while(!cin.eof())
    {
        // read input
        cout << "Insira a primeira fração (N/D) ? ";
        while(!readFracc(numerator1, denominator1) && !cin.eof())
        {
            if(cin.fail())
            {
                cin.clear();
                cin.ignore(1000, '\n');
            }
            cout << "A fração é inválida ou não respeitou a syntaxe (N/D)! Introduza novamente ? ";
        }
        
        cout << "Insira a segunda fração (N/D) ? ";
        while(!readFracc(numerator2, denominator2) && !cin.eof())
        {
            if(cin.fail())
            {
                cin.clear();
                cin.ignore(1000, '\n');
            }
            cout << "A fração é inválida ou não respeitou a syntaxe (N/D)! Introduza novamente ? ";
        }

        cout << "Que operação deseja fazer { + , - , * , / } ? ";
        while(!(cin >> op) && !cin.eof())
        {
            cout << "Operador inválido! Introduza novamente ? ";
        }

        // Output and arithmetic operation
        cout << numerator1 << '/' << denominator1 << op << numerator2 << '/' << denominator2 << " = ";
        switch(op)
        {
            case '+': 
                AddFraction(numerator1, denominator1, numerator2, denominator2);
                break;
            case '-':
                SubFraction(numerator1, denominator1, numerator2, denominator2);
                break;
            case '*':
                MultFraction(numerator1, denominator1, numerator2, denominator2);
                break;
            case '/':
                DivFraction(numerator1, denominator1, numerator2, denominator2);
                break;
        }

        // Handle 1/1 and 0/n results
        if (numerator1 == denominator1 == 1)
            cout << "1\n\n";
        else if (numerator1 == 0)
            cout << "0\n\n";
        else 
            cout << numerator1 << '/' << denominator1 << "\n\n";
        
    }
    

}

/* Ex 3.5 (a) */
bool readFracc(int &numerator, int &denominator)
{
    char Op;
    cin >> numerator >> Op >> denominator;

    /* Bad input OR Invalid arithmetic operator OR fraction 
        -> A fraction should be less than 1
        -> denominator shouldn't be 0 */
    if (cin.fail() || Op != '/' || denominator == 0 || numerator >= denominator) 
    {
        numerator = 0;
        denominator = 0;
        return false; 
    }
    else
        return true;
}

/* Ex 3.5 (b) */
void writeFracc(int numerator, int denominator)
{
    cout << numerator << '/' << denominator << endl;
}


/* Ex 3.5 (c) */
void reduceFracc(int &numerator, int &denominator)
{
    int gcd = gcdEuclidean(numerator, denominator);

    numerator /= gcd;
    denominator /= gcd;
}

/* Find and return the greatest common divisor for 'a' and 'b' */
int gcdEuclidean(int a, int b)
{
    int aux;
    while(b != 0)
    {
        aux = b;
        b = a % b;
        a = aux;
    }

    return a;
}

/* Ex 3.5 (d) */

/* Gets two fractions, adds and reduces the result. 
    F1 = reduceFracc(F1+F2) */
void AddFraction (int &N1, int &D1, int N2, int D2)
{
    if(D1 == D2)
    {
        N1 += N2;
        reduceFracc(N1, D1);
    }
    else
    {
        int aux = D1;

        N1 *= D2; D1 *= D2;
        N2 *= aux; D2 *= aux;

        N1 += N2;
        reduceFracc(N1, D1);       
    }
}

/* Gets two fractions, subtracts and reduces the result. 
    F1 = reduceFracc(F1-F2) */
void SubFraction (int &N1, int &D1, int N2, int D2)
{
    if(D1 == D2)
    {
        N1 -= N2;
        reduceFracc(N1, D1);
    }
    else
    {
        int aux = D1;

        N1 *= D2; D1 *= D2;
        N2 *= aux; D2 *= aux;

        N1 -= N2;
        reduceFracc(N1, D1);       
    }
}

/* Gets two fractions, F1 and F2, multiples and reduces the resultant fraction. 
    F1 = readFracc(F1*F2) */
void MultFraction (int &N1, int &D1, int N2, int D2)
{
    reduceFracc(N1*=N2, D1*=D2);
}

void DivFraction (int &N1, int &D1, int N2, int D2)
{
    reduceFracc(N1*=D2, D1*=N2);
}