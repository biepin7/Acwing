#include <bits/stdc++.h>
// #define x first
// #define y second

using namespace std;

// typedef long long LL;

// const int N = 110;

int T;

using namespace std;

int main()
{
    cin>>T;
    while(T--){
        int a,b,c,d,e,f;
        cin>>a>>b>>c>>d>>e>>f;
        int res=0;
        if(e>=f){
            if(a>=d) res = d*e;
            else{
                int min_n=min(b,min(c,d-a));
                res = a*e+min_n*f;
            }
        }
        else{
            int min_n=min(b,min(c,d));
            if(min_n == d) res = d*f;
            else{
                res =min_n*f+min(a,d-min_n)*e;
            }
        }
        cout<<res<<endl;
    }
    

    return 0;
}
