#include<iostream>
#include<string>
#include<algorithm>
#include<math.h>
using namespace std;


int main()
{
    int n,m;
    long long a[60];
    a[0]=0;
    a[1]=1;
    a[2]=1;
    for (int i=3;i<60;i++){
        a[i]=a[i-1]+a[i-2];
    }
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>m;
        printf("Fib(%d) = %lld\n",m,a[m]);
    }
    return 0;
}