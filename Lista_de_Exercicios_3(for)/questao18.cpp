#include <iostream>

using namespace std;

int main()
{
    int N = 0;
    float H=0;
    float soma= 0;
    cout<<"Informe um número : ";
    cin>>N;

    for(int i = 1; i<=(N-1); i++){
        soma = soma + (1.0/i) - (1.0/(1+i));
    }


    cout<<"O valor de H é : "<<soma;
    return 0;
}


