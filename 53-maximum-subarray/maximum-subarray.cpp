class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // vector<int>sum;
        int maxs =INT_MIN;
        int total=0;
        for(int i=0;i<nums.size();i++){
            total = max(nums[i], total+ nums[i]);
            maxs = max(total, maxs);
        }
        return maxs;

    }
};