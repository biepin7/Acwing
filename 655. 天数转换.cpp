#include<iostream>
#include<string>
#include<algorithm>
#include<math.h>
using namespace std;

const double PI = 3.14159;

int main()
{
    int n;
    cin>>n;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)",n/365,n%365/30,n%365%30);
    return 0;
}