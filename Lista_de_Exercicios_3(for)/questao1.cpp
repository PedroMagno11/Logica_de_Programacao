#include <iostream>
using namespace std;
int main()
{
    int numeros[10];
    for(int i=0;i<10;i++){
        cout<<"Informe um valor: ";
        cin>>numeros[i];
    }
    for(int j = 0; j<10; j++)
    {
        cout<<numeros[j]<<endl;
    }
    return 0;
}
