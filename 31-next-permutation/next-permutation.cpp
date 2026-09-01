class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int l = -1;
        // int r = n-1;
        // if(n==2){
        //     swap(nums[0],nums[1]);
        //     return;
        // }
        for(int i=n-2;i>=0;i--){

            if(nums[i]<nums[i+1]){
               l = i;
               break;
            }
            // r--;
        }
        // int m = INT_MAX;
        // for(int i=0;i<n;i++){
        //     if(i>l && nums[i]>nums[l]){
        //         m = min(nums[i],m); 
        //     }
            
        // }
        if(l==-1){
        reverse(nums.begin(),nums.end());
        return;
        }
        for(int i=n-1;i>l;i--){
            if(nums[i]>nums[l]){
                swap(nums[i],nums[l]);
                break;
            }
            
        }
        // for(int i=l+1;i<n;i++){
        //    if(nums[i]<nums[n-1]){
        //             swap(nums[i],nums[l+1]);
        //             return;
        //         }
        // }
        reverse(nums.begin() + l+1, nums.end());
        
        // return;
    }
};