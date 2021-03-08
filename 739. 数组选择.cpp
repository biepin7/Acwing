#include<iostream>
#include<string>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
    double temp ;
    for (int i = 0; i < 100;i++)
    {
        cin>>temp;
        if(temp <=10 )  printf("A[%d] = %.1lf\n",i,temp);
    }
    return 0;
}