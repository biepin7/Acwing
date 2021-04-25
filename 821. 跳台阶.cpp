#include <bits/stdc++.h>
using namespace std;

int n;
int res;


void f(int k)
{
    if(k==n) res++;
    else if(k<n){
        f(k+1);
        f(k+2);
    }
}

int main(){
    cin>>n;
    f(0);
    cout<<res;

    return 0;
}