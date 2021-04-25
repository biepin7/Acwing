#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        /** 1s会超时
        for(int i=i;i<x;i++){ //枚举x的所有约数
            if(x%i==0)  sum+=i;
        }
        **/

        //约数是成对出现的，所以枚举两个约束的较小数即可
        int sum = 0;
        for (int i = 1; i * i <= x; i ++ )
            if (x % i == 0)
            {
                if (i < x) sum += i;
                if (i != x / i && x / i < x) sum += x / i;
            }

        if (sum == x) printf("%d is perfect\n", x);
        else printf("%d is not perfect\n", x);

    }
    return 0;

   return 0;
}