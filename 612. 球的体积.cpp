#include<iostream>
#include<string>
#include<algorithm>
#include<math.h>
using namespace std;

const double PI = 3.14159;

int main()
{
    double r;
    cin>>r;

    printf("VOLUME = %.3lf",r*r*r*PI*(4/3.0));
    return 0;
}