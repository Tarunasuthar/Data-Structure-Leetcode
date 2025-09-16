class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
         int row = matrix.size();
         int col = matrix[0].size();
         int t=0;
         int r=col-1;
         while(t<row && r>=0){
            if(matrix[t][r]==target) return true;
            else if(matrix[t][r]>target)  r--;
            else t++;
         }
         return false;
    }
};