#include<iostream>
#include<string>
#include<algorithm>
#include<math.h>
using namespace std;

const double PI = 3.14159;

int main()
{
    double a,b,c;
    cin>>a>>b>>c;
    printf("MEDIA = %.1lf",(a*2+b*3+c*5)/(2+3+5));
    return 0;
}