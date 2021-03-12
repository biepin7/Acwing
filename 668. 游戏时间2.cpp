#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int starttime = a*60+b;
    int endtime =c*60+d;

    int res = endtime - starttime;
    if(res<=0) res+=60*24;

    cout<<"O JOGO DUROU "<<res/60<<" HORA(S) E "<<res%60<<" MINUTO(S)";

    return 0;
}