#include <iostream>
#include <locale>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL,"");
    float Numeros[10];

    for(int i = 0; i<10; i++){
        cout<<"Informe um valor: ";
        cin>>Numeros[i];
    }
    for(int j=0;j<10;j++){
        cout<<sqrt(Numeros[j])<<endl;
    }
    return 0;
}
