#include<iostream>
#include<string>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;


int main() {
    double k;
    string a,b;
    cin>>k>>a>>b;

    int num=0;

    for (int i = 0; i < a.size(); i ++ )
    if (a[i] == b[i]) num ++ ;

    if(k <= (double)num/a.size() ) cout<<"yes";
    else cout<<"no";

    return 0;
}