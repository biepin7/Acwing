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
                cout<<long(pow(2,i+j))<<" ";  // 如果不long 会出错

            }
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}