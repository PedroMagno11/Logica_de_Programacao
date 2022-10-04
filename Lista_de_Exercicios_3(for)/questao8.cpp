#include <iostream>

using namespace std;

int main()
{
    int numero = 0;
    cout<<"Informe um número: ";
    cin>>numero;
    for(int i = 0; i<numero; i++){
        cout<<i*i<<endl;
    }
    return 0;
}

