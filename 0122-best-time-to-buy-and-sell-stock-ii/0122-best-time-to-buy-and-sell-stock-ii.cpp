class Solution {
public:
    int fun(int i,vector<int>&prices,int buy,vector<vector<int>>&dp){

        if(i>=prices.size()){
            return 0;
        }
        
        if(dp[i][buy]!=-1) return dp[i][buy];
        int profit,n_profit;
        if(buy){
            //take
            profit = -prices[i] + fun(i+1,prices,0,dp);
            //not take
            n_profit = 0  + fun(i+1,prices,1,dp);
        }
        else{
            profit = prices[i]+fun(i+1,prices,1,dp);
            n_profit = 0 + fun(i+1,prices,0,dp);
        }
        return  dp[i][buy] = max(profit,n_profit);
    }



    int maxProfit(vector<int>& prices) {
        vector<vector<int>> dp(prices.size(),vector<int>(2,-1));
        return fun(0,prices,1,dp);
    }
};