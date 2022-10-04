#include <iostream>

using namespace std;

int main()
{
    float N = 0;
    float H=0;
    cout<<"Informe um número : ";
    cin>>N;

    for(int i = 1;i<=N;i++){
        H=H+(1.0/i);
    }
    cout<<"O valor de H é : "<<H;
    return 0;
}


