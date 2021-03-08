#include<iostream>
#include<string>
#include<algorithm>
#include<math.h>
using namespace std;

const double PI = 3.14159;

int main()
{
    string a;
    double b,c;
    cin>>a>>b>>c;
    printf("TOTAL = R$ %.2lf",b+c*0.15);
    return 0;
}