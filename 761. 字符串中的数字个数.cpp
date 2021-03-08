#include<iostream>
#include<string>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
    string s;
    int res=0;
    getline(cin,s);
    for(char c : s){
        if(c>='0'&&c<='9')  res++;
    }
    cout<<res;
    return 0;
}