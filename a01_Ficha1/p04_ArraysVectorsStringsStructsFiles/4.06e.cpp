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


int searchMultValuesInIntArray(const int a[], int nElem, int value, int index[])
{
    int g = 0; /* auxiliar index for 'index[]' array */
    for(int i = 0; i < nElem; i++)
    {
        if(a[i] == value)
        {
            index[g] = i;
            g++;
        }
    }

    return g;
}

int main()
{
    const int arraySize = 5;
    int a[arraySize], index[arraySize], searchVal, indexCount;

    /* Fill array with user input */
    readIntArray(a, arraySize);

    /* TEST search-MultValuesInIntArray */
    cout << "Que valor quer procurar ? ";
    cin >> searchVal;
    indexCount = searchMultValuesInIntArray(a, arraySize, searchVal, index);
    if(!indexCount)
        cout << "O valor não existe!";
    else
    {
        cout << "Foram encontrados " << indexCount << " elementos!\n";
        cout << "Indices: ";
        for(int i = 0; i < indexCount; i++)
            cout << index[i] << " ";
        cout << endl;
    }

}