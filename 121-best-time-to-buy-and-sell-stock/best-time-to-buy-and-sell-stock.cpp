class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int buy = INT_MAX;
       int sell =0;
       int idx;
       for(int i=0;i<prices.size();i++){
        if(buy > prices[i]){
            buy = prices[i];
            // sell = prices[i];
        }
        sell = max(sell, prices[i]-buy);
       }
    //    for(int i=idx; i<prices.size();i++){
    //     sell = max(sell, prices[i]);
    //    }
    //    int res= sell - buy;
       
       return sell;// - buy;
    }
};