#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float numeros[8];
    for(int i = 0 ; i<8; i++){
        cout<<"Informe um valor : ";
        cin>>numeros[i];
    }
    for(int j = 0; j<8; j++){
        cout<<log10f(numeros[j])<<endl;
    }
    return 0;
}
