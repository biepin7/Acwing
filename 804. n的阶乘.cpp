#include<iostream>
#include<string>
#include<algorithm>
#include<math.h>
using namespace std;

int fact(int n)
{
    int res=1;
    for(int i=1;i<n+1;i++){
        res*=i;
    }
    return res;
}

int main()
{
    int n;
    cin>>n;
    cout<<fact(n);
    return 0;
}