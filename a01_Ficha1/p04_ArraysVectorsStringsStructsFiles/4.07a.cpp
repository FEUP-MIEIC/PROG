#include <iostream>
#include <vector>

using namespace std;

void readIntVector(vector<int> &v, int nElem)
{
    for(int i = 0; i < nElem; i++)
    {
        int aux;
        cout << "Insira um elemento para v[" << i << "] ? ";
        cin >> aux;
        v.push_back(aux); 
    }
}

int searchValueInVector(const vector<int> &v, int value)
{
    for(int i = 0; i < v.size(); i++)
    {
        if(v[i] == value)
            return i;
    }
    return -1;

}

vector<int> searchMultValuesInIntVector(const vector<int> &v, int value)
{
    vector<int> index;

    for(int i = 0; i < v.size(); i++)
    {
        if(v[i] == value)
            index.push_back(i);
    }

    return index;

}
int main()
{
    vector<int> a, index;
    int const length = 5;
    int searchVal;

    readIntVector(a, length);

    /* TEST search-MultValuesInIntArray */
    cout << "Que valor quer procurar ? ";
    cin >> searchVal;
    index = searchMultValuesInIntVector(a, searchVal);
    if(!index.size())
        cout << "O valor não existe!";
    else
    {
        cout << "Foram encontrados " << index.size() << " elementos!\n";
        cout << "Indices: ";
        for(int i = 0; i < index.size(); i++)
            cout << index[i] << " ";
        cout << endl;
    }
}