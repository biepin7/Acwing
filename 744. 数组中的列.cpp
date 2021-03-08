#include<iostream>
#include<string>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
    int l;
    char c;
    cin>>l>>c;
    double res=0;
    for(int i=0; i < 12;i++)
    {
        for(int j = 0; j <12;j++){
            double a;
            cin>>a;
            if (l==j) res+=a;
        }
    }
    printf("%.1lf",c=='S' ? res : res/12);
    return 0;
}