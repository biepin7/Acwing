#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

const int N = 10001;

int stk[N],tt;

int main(){
    int n;
    cin>>n;
    while (n--)
    {   
        int x ;
        cin>>x;
        while (tt && stk[tt]>=x) tt--;
        if(!tt) cout<<"-1 ";
        else cout<<stk[tt]<<" ";
        stk[++tt]=x;
    }
    return 0;
}
 