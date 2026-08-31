class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        // vector<int>pos;
        // vector<int>neg;
        int n = nums.size();
        int pos=0,neg=1;
        vector<int>res(n, 0);
        for(int i=0;i<nums.size();i++){
            if(nums[i] > 0){
                res[pos] = nums[i];
                pos += 2;
            }else{
                res[neg] = nums[i];
                neg += 2;
            }
        }
        // for(int i=0;i<(nums.size())/2;i++){
        //     res.push_back(pos[i]);
        //     res.push_back(neg[i]);
            
        // }
        return res;
    }
};