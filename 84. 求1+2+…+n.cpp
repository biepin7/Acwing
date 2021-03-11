#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int getSum(int n) {
        int res =n ;
        // if(n>0)   res +=getSum(n-1)
        n > 0 && (res+=getSum(n-1));
    }
};