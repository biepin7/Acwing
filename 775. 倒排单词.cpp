#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> v;
    string s;
    while (cin>>s)
    {
        v.insert(v.begin(),s); 
    }
    for(auto i:v){cout<<i<<" ";}
    return 0;
}

// 更快的解法,无需vector

// int main()
// {
//     string str, res;
//     while (cin >> str)
//         res = str + ' ' + res;
//     cout << res;

// }