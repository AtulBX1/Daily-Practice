class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        // int n = max(nums1.size(),nums2.size());
        vector<int>res;
        // int n = nums1.size() + nums2.size();
        for(int i=0;i<nums1.size();i++){
            res.push_back(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++){
            res.push_back(nums2[i]);
        }
        double total = 0;
        for(int i =0;i<res.size();i++){
            total += res[i];
        }
        sort(res.begin(),res.end());
        int m = res.size();
        double med;
        if(m%2==0){
            med = (res[(m/2)-1]+res[(m/2)])/2.0;
        }else{
            med = res[m/2];
        }
        
        return med;
    }
};