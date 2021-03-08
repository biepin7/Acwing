#include<iostream>
#include<string>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
    char c;
    cin>>c;
    double m[12][12];

    for(int i=0;i<12;i++){
        for(int j=0;j<12;j++)
        {
            cin>>m[i][j];
        }
    }
    int num = 0;
    double temp=0;
    for(int i=0;i<5;i++){
        for (int j = i+1; j < 11-i; j++)
        {
            num++;
            temp+=m[i][j];
        }
    }

    printf("%.1lf",c=='S'?temp:temp/num);

    return 0;
}