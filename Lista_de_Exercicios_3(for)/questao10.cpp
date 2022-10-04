#include <iostream>

using namespace std;

int main()
{
    int numeros[100];
    int somatorio = 0;
    float media = 0;
    for(int i = 0; i<100; i++){
        cout<<"Informe um número: ";
        cin>>numeros[i];
        somatorio += numeros[i];
    }
    media = somatorio/100.0;


    cout<<somatorio<<endl;
    cout<<media;
    return 0;
}

