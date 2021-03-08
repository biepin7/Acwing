class Solution {
public:
    int getNumberOfK(vector<int>& nums , int k) {
        int res=0;
        for(int i:nums)
        {
            if(i==k) res++;
        }
        return res;
    }
};