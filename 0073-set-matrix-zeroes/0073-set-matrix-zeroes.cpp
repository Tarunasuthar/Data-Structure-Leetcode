class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int,int>> all;
        int m = matrix.size();
        int n = matrix[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    all.push_back({i,j});
                }
            }
        }
        for(int i=0;i<all.size();i++){
            int a = all[i].first;
            int b = all[i].second;
            for(int j=0;j<n;j++){
                matrix[a][j] = 0;
            }
            for(int j=0;j<m;j++){
                matrix[j][b] = 0;
            }
        }
    }
};