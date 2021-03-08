#include<iostream>
#include<string>
#include<algorithm>
#include<math.h>
using namespace std;


int main()
{
    int a[20];
    for(int i=0; i<20; i++){
        cin >> a[i];
    }
    for(int i=0; i<20; i++){
        printf("N[%d] = %d\n",i,a[20-i-1]);
    }
    return 0;
}