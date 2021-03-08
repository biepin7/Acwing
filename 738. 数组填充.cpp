#include<iostream>
#include<string>
#include<algorithm>
#include<math.h>
using namespace std;

const double PI = 3.14159;

int main()
{
    int x;
    cin>>x;

    for(int i = 0; i < 10;i++){
        cout<<"N["<<i<<"] = "<<x<<endl;
        x=2*x;
    }
    
    return 0;
}