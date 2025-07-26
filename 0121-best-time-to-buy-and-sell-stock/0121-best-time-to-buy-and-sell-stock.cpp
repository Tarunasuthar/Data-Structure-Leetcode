class Solution {
public:
    int maxProfit(vector<int>& prices) {
         int size = prices.size();
         vector<int> prefix;
         int mini = INT_MAX;
         for(int i=0;i<size;i++){
              mini = min(mini,prices[i]);
              prefix.push_back(mini);
         }
         int maxi = 0;
         for(int i=size-1;i>=0;i--){
             if(prices[i]>prefix[i])
             maxi = max(maxi,prices[i]-prefix[i]);
         }
         return maxi;
    }
};