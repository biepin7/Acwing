#include <bits/stdc++.h>
using namespace std;

int n,m;
int res;


void f(int i,int j)
{
    if(i==n&&j==m) res++;
    else if(i<n && j<m){
        f(i+1,j);
        f(i,j+1);
    }
}

int main(){
    cin>>n>>m;
    f(0,0);
    cout<<res;

    return 0;
}