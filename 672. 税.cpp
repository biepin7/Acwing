#include<bits/stdc++.h>
using namespace std;

int main(){
    double a;
    cin>>a;
    if(a>0&&a<=2000.0) cout<<"Isento";
    else if(a>2000.0&&a<=3000) printf("R$ %.2lf",(a-2000)*0.08);
    else if(a>3000.0&&a<=4500) printf("R$ %.2lf",(a-3000)*0.18+80);
    else if(a>4500.0) printf("R$ %.2lf",(a-4500)*0.28+350);
    return 0;
}