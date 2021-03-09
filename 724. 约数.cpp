#include<iostream>
#include<string>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;


int main() {
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0){
            cout<<i<<endl;
        }
    }
    return 0;
}