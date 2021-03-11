#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    string word;
    int num=0;
    while(cin>>s)
    {
        if (s.back() == '.') s.pop_back();
        if(s.size()>num)
        {
            word=s;
            num=s.size();
        }
    }
    
    cout<<word;
    return 0;
}