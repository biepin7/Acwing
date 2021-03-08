#include<iostream>
#include<string>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
    int n;
    while (cin>>n && n!=0)
    {
        for(int i=0; i<n;i++){
            for(int j=0; j<n;j++)
            {
                cout<<abs(i-j)+1<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}