#include<iostream>
#include<string>
#include<algorithm>
#include<math.h>
using namespace std;

const double PI = 3.14159;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    cout<<max(a,max(b,c))<<" eh o maior";
    return 0;
}