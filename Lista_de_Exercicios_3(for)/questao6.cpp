#include <iostream>

using namespace std;

int main()
{
    int numerosImpares[100];
    for(int i = 0; i<100; i++)
    {
        numerosImpares[i] = 2*i+1;
    }
    for(int j = 0;j<100; j++){
        cout<<numerosImpares[j]<<endl;
    }
    return 0;
}
