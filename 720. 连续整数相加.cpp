#include<iostream>
#include<string>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;


int main() {
    int a,n;
    cin>>a;
    while(cin>>n,n<=0);
    
    int res=0;
    for(int i=0;i<n;i++) res+=a+i;

    cout<<res;
    return 0;
}