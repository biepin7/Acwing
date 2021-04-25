#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findNumbersWithSum(vector<int>& nums, int target) {
        unordered_set<int> s;
        for(auto x:nums){
            if(s.count(target-x)) return {x,target-x};
            s.insert(x);
        }
    }
};