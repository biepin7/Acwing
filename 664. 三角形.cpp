#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double a,b,c;
    cin>>a>>b>>c;
    // 两边之和>第三边 两边之差的绝对值<第三边
    if(a+b>c && fabs(a-b)<c) printf("Perimetro = %.1lf",a+b+c);
    else printf("Area = %.1lf",(a+b)*c/2);
    return 0;
}