class Solution {
public:
    int num(int ind,vector<int>&coins,int amount,vector<vector<int>>& dp){
        if(ind==0){
            if(amount%coins[0]==0){
                return 1;
            }
            else {
                return 0;
            }
        }
        if(dp[ind][amount]!=-1){
            return dp[ind][amount];
        }
        int n_take = 0 + num(ind-1,coins,amount,dp);
        int take = 0;
        if(amount>=coins[ind])
        take = num(ind,coins,amount-coins[ind],dp);

        return dp[ind][amount] = n_take+take;
    }

    int change(int amount, vector<int>& coins) {
        int size = coins.size();
        vector<vector<int>> dp(size,vector<int>(amount+1,-1));
        return num(size-1,coins,amount,dp);
        
    }
};