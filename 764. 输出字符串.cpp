#include<bits/stdc++.h>
using namespace std;



int main()
{
    string s;
    getline(cin,s);
    string b=s;
    for (int i = 0; i <s.size()-1;i++) {
        b[i]=char(s[i]+s[i+1]);
    }
    b.back()=char(s[0]+s.back());

    cout <<b;

    return 0;
}

// #include <iostream>

// using namespace std;

// int main()
// {
//     string a, b;
//     getline(cin, a);

//     for (int i = 0; i < a.size(); i ++ ) b += a[i] + a[(i + 1) % a.size()]; // 注意这里的取模

//     cout << b << endl;

//     return 0;
// }