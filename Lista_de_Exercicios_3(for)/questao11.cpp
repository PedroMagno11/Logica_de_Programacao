#include <iostream>

using namespace std;

int main()
{
    int numero = 0;
    int fatorial = 1;
    cout<<"Informe um número: ";
    cin>>numero;

    if(numero<0){
        cout<<"Não existe fatorial de número negativo";
    }
    else if(numero==0){
        cout<<"O fatorial de "<<numero<<" é : "<<fatorial;
    }else{
        for(int i = numero; i>0;i--){
        fatorial = fatorial*i;
        }
        cout <<"O fatorial de "<<numero<<" é : "<<fatorial;
    }

    return 0;
}

