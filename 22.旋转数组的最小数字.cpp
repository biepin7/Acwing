class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size() -1; // 注意是size-1
        if(n<0) return -1;
        while(n>0 && nums[n]==nums[0]) n--; // 去除尾部的重复项
        if(nums[n] >= nums[0]) return nums[0]; //尾部都被删除，直接返回第一个节点
        int l=0,r=n;
        while (l<r) {
            int mid = l+r >>1;
            if(nums[mid] < nums[0]) r=mid;
            else l = mid + 1;
        }
        return nums[r];
    }
};