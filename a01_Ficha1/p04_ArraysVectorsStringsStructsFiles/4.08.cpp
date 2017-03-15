#include <iostream>
#include <vector>
#include <climits>

using namespace std;

void bubbleSort(vector<int> &v){
    int limite=v.size();
    int troca=INT_MAX;
    while(troca>0){
        troca=0;
        for(int j=0;j<limite-1;j++){
            if(v[j]>v[j+1]){
                int x=v[j];
                v[j]=v[j+1];
                v[j+1]=x;
                troca=j;
            }
        }
        limite=troca+1;
    }
    cout << "Sorted!\n";
    return;
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
    bubbleSort(a);

    for(int i = 0; i < a.size(); i++)
        cout << "a[" << i << "] : " << a[i] << endl;


}
