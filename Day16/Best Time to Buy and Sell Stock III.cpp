class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit1 =0 ;
        int profit2 = 0;
        int buy1 = INT_MAX;
        int buy2 = INT_MAX;
        
        for(int i = 0;i<prices.size(); i++){
            buy1 = min(buy1 , prices[i]);
            profit1 =  max(profit1 ,prices[i]-buy1);
            buy2 = min(buy2 ,prices[i]-profit1);
            profit2 = max(profit2 , prices[i]-buy2);
        }
        
        
        return profit2;
        
    }
};
