#include<iostream>
#include<string>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;


int main()
{
    string a,b;
    getline(cin,a);
    getline(cin,b);

    
    for(int i=0;i<max(a.size(),b.size());i++)
    {
        a[i]=tolower(a[i]);
        b[i]=tolower(b[i]);
        
        if(a[i]<b[i]) 
        {
            cout<<"<";
            return 0;
        }
        else if(a[i]>b[i]) {
            cout<<">";
            return 0;
        }
    }
    cout<<"=";
    return 0;
}

// #include<iostream>
// using namespace std;
// int main()
// {
//     string a,b;
//     getline(cin,a);
//     getline(cin,b);
//     for(auto &c:a) c = tolower(c);
//     for(auto &c:b) c = tolower(c);
//     if(a == b) cout << '=';
//     if(a > b) cout << '>';
//     if(a < b) cout << '<';
// }