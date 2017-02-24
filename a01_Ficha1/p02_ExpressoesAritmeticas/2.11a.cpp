#include <iostream>

using namespace std;
#define N_TERMOS 6000
int main()
{
    double pi = 0;
    int den, termo;
    for(den = 1, termo = 1; termo < N_TERMOS; den+=2, ++termo)
    {
        (termo % 2 == 0) ? pi += 4.0/den * -1 : pi += 4.0/den;
    }

    cout << "Série (PI) : " << pi << endl;
}