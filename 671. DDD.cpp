#include<iostream>
#include<string>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
    int x;
    cin>>x;
    if(x==61) 
        cout<<"Brasilia";
    else if(x==71)
        cout<<"Salvador";
    else if(x==11)
        cout<<"Sao Paulo";
    else if(x==21)
        cout<<"Rio de Janeiro";
    else if(x==32)
        cout<<"Juiz de Fora";
    else if(x==19)
        cout<<"Campinas";
    else if(x==27)
        cout<<"Vitoria";
    else if(x==31)
        cout<<"Belo Horizonte";
    else
        cout<< "DDD nao cadastrado";
    return 0;
}