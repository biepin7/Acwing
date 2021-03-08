#include<iostream>
#include<string>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
    int res = 0;

    int a,b;
    cin>>a>>b;
    if(a>b) swap(a,b);
    for(int i=a+1;i<b;i++)
    {
        if(abs(i)%2==1)   res+=i;
    }
    cout<<res;
    return 0;
}