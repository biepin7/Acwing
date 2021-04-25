#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int center_x=n/2,center_y=n/2;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            //曼哈顿距离法 |x1-xc|+|y1-yc|
            if( abs(i-center_x)+abs(j-center_y)  <= n/2) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
}s