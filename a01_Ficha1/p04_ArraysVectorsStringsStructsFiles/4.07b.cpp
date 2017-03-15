#include <iostream>
#include <vector>

using namespace std;

void readIntVector(vector<int> &v)
{
    int aux;
    cout << "Insira um elemento para v[" << v.size() << "] ? ";
    while(cin >> aux)
    {
        v.push_back(aux);
        cout << "Insira um elemento para v[" << v.size() << "] ? ";
        
    }
}

vector<int> readIntVector()
{
    int aux;
    vector<int> v;

    cout << "Insira um elemento para v[" << v.size() << "] ? ";
    while(cin >> aux)
    {
        v.push_back(aux);
        cout << "Insira um elemento para v[" << v.size() << "] ? ";
        
    }

    return v;
}

int main()
{
    vector<int> a, index;

    //readIntVector(a);

    a = readIntVector();

    for(int i = 0; i < a.size(); i++)
        cout << "a[" << i << "] : " << a[i] << endl;
    
    
}