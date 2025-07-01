class Solution {
public:
    int recur(int ind,int p_ind,vector<int> & nums,vector<vector<int>> &dp){
        if(ind==nums.size()){
           return 0;
        }
        if(dp[ind][p_ind+1]!=-1) return dp[ind][p_ind+1];
        int len = 0+recur(ind+1,p_ind,nums,dp);
        if(p_ind==-1 || nums[ind]>nums[p_ind]){
            len = max(len,1+recur(ind+1,ind,nums,dp));
        }
        return dp[ind][p_ind+1] = len;
    }
    int lengthOfLIS(vector<int>& nums) {
        int size = nums.size();
        vector<vector<int>> dp(size,vector<int>(size+1,-1));
        return  recur(0,-1,nums,dp);
        
    }
};