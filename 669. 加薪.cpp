#include<iostream>
#include<string>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;


int main()
{
    double n;
    cin>>n;
    double x,y;
    int z;
    if(n>=0&&n<=400) z=15;
    else if(n<=800) z=12;
    else if(n<=1200) z=10;
    else if(n<=2000) z=7;
    else z = 4;

    printf("Novo salario: %.2lf\n", n * (1 + z*0.01));
    printf("Reajuste ganho: %.2lf\n", n * z * 0.01);
    printf("Em percentual: %d %%", z);

    return 0;
}