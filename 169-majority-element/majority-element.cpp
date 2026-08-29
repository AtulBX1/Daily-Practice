class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int maj;// = nums[0];
        int n = nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            maj = nums[i];
            int count =1;
            for(int j=1;j<n;j++){
                if(maj == nums[j]){
                    count++;
                }
            }
            if(count>(n/2)){
                break;
            }
        }
        return maj;
    }
};