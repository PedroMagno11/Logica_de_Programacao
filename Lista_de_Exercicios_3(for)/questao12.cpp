#include <iostream>

using namespace std;

int main()
{
    int numero = 0;
    int quantidadeDeDivisores = 0;
    cout<<"Informe um número : ";
    cin>>numero;
    for(int i = 1;i<=numero;i++){
        if(numero%i==0){
            cout<<i<<endl;
        }
    }

    return 0;
}

