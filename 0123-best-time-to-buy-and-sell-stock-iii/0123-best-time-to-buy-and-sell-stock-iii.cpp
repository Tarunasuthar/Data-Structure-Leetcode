class Solution {
public: 
    int fun(int i,int buy,int cap,vector<int>&prices,vector<vector<vector<int>>>&dp){
       if(cap<=0) return 0;
       if(i>=prices.size()) return 0;
        
       if(dp[i][buy][cap]!=-1){
        return dp[i][buy][cap];
       }

       int profit,n_profit;
      
       if(buy){
        profit = -prices[i] + fun(i+1,0,cap,prices,dp);
        n_profit = 0 + fun(i+1,1,cap,prices,dp);
       }
       else{
        profit = prices[i] + fun(i+1,1,cap-1,prices,dp);
        n_profit = 0 + fun(i+1,0,cap,prices,dp);
       }
       return dp[i][buy][cap] = max(profit,n_profit);
    }
    int maxProfit(vector<int>& prices) {
        vector<vector<vector<int>>>dp(prices.size(),vector<vector<int>>(2,vector<int>(3,-1)));
        return fun(0,1,2,prices,dp);
    }
};