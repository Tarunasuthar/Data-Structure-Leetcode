class Solution {
public:
    int num(int ind,vector<int>&coins,int amount,vector<vector<int>>&dp){
        // base case;
        if(ind==0){
            if(amount%coins[0]==0){
                return amount/coins[0];
            }
            else {
                return 1e9;
            }
        }
        if(dp[ind][amount]!=-1){
            return dp[ind][amount];
        }
        int n_take = 0 + num(ind-1,coins,amount,dp);
        int take = 1e9;
        if(amount>=coins[ind])
        take = 1 + num(ind,coins,amount-coins[ind],dp);

        return dp[ind][amount] = min(n_take,take);

    }

    int coinChange(vector<int>& coins, int amount) {
       vector<vector<int>> dp(coins.size(),vector<int>(amount+1,-1));
       int val = num(coins.size()-1,coins,amount,dp);
       if(val>=1e9) return -1;
       return val;
    }
};