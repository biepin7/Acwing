#include <bits/stdc++.h>
#define x first
#define y second

using namespace std;

typedef long long LL;

const int N = 100010;

int n,m;

int tmp[N];
unordered_map<int, int> um;

int main()
{
    cin>>m>>n;
    for(int i=0;i<n*m;i++){
        int x;
        cin>>x;
        if(++um[x]>n*m/2) {
            cout<<x;
            break;
        }
    }
    

    return 0;
}
 