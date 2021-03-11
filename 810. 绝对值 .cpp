#include<bits/stdc++.h>
using namespace std;

int abs(int x){
    if(x<0) return -x;
    else return x;
}


int main()
{
    int n; 
    cin>>n;

    cout<<abs(n);

    return 0;
}