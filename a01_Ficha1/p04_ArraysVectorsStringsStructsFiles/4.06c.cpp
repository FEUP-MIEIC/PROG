#include <iostream>

using namespace std;

/* Reads elements for array of nElem elements */
void readIntArray(int a[], int nElem)
{
    int i;

    for(i = 0; i < nElem; i++)
    {
        cout << "Insira elemento a[" << i << "] ? ";
        cin >> a[i];
    }
}

/* Returns index of value on the array. If value doesn't exist returns -1 */
int searchValueInIntArray(const int a[], int nElem, int value)
{
    for(int i = 0; i < nElem; i++)
        if(a[i] == value) return i;

    return -1;
}



int main()
{
    const int arraySize = 5;
    int a[arraySize], searchVal, indexVal;

    /* Fill array with user input */
    readIntArray(a, arraySize);

    /* TEST searchValueInIntArray */
    cout << "Que valor quer procurar ? ";
    cin >> searchVal;
    indexVal = searchValueInIntArray(a, arraySize, searchVal);
    
    
    if(indexVal != -1)
        cout << "Valor encontrado no indice " << indexVal << endl;
    else
        cout << "Valor não encontrado!\n"; 


}