#include <iostream>

using namespace std;

void somatorio(int numero)
{
    int soma = 0;
    for(int i = 0; i<=numero; i++)
    {
        soma = soma+i;
    }
    cout<<soma;
}

int main()
{
    for(int i = 0; i<=100; i++)
    {
        cout<<i<<endl;
    }
    cout<<"O somatorio dos numeros de 1 a 100 é : " ;
    somatorio(100);
    return 0;
}


