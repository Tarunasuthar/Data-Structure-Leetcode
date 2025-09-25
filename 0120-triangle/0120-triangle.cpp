class Solution {
public:
    // int sumrec(int c,int r,vector<vector<int>>& triangle,vector<vector<int>> & dp){
    //     if(r==triangle.size()-1) return triangle[r][c];

    //     if(dp[r][c]!=-1) return dp[r][c];
    //     int a =  triangle[r][c] + sumrec(c,r+1,triangle,dp);
    //     int b =  triangle[r][c] + sumrec(c+1,r+1,triangle,dp);
    //     return dp[r][c] = min(a,b);
    // }
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        vector<int> dp(triangle.back());

        for(int r = n-2;r>=0;r--){
           for(int c=0;c<=r;c++){
              dp[c] = triangle[r][c] + min(dp[c],dp[c+1]);
           }
        }
        return dp[0];
    }
};