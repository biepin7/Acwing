#include<iostream>
#include<string>
#include<algorithm>
#include<math.h>
using namespace std;

const double PI = 3.14159;

int main()
{
    int a,b;
    cin>>a>>b;
    // if(a==b) cout<<"O JOGO DUROU 24 HORA(S)";
    // else if(a<b){
    //     cout<<"O JOGO DUROU "<<b-a<<" HORA(S)";
    // }
    // else{
    //     cout<<"O JOGO DUROU "<<24-a+b<<" HORA(S)";
    // }
    int res;
    if (a < b) res = b - a;
    else  res = b - a + 24;

    printf("O JOGO DUROU %d HORA(S)\n", res);
    return 0;
}s