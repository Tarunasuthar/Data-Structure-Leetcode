class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
         int n=grid.size();
         vector<vector<int>> res(n,vector<int>(n,0));
         for(int p=0;p<n;p++){
         int i=p;
         int j=0;
         vector<int> vec;
         while(i<n && j<n){
            vec.push_back(grid[i][j]);
            i++;
            j++;
         }
         sort(vec.begin(),vec.end(),greater<int>());
         i = p;
         j = 0;
         int k = 0;
         while(i<n && j<n){
            res[i][j] = vec[k];
            i++;
            j++;
            k++;
         }
         }
         for(int p=1;p<n;p++){
            int i=0;
            int j=p;
            vector<int> vec;
            while(i<n && j<n){
            vec.push_back(grid[i][j]);
            i++;
            j++;
         }
           sort(vec.begin(),vec.end());
            i = 0;
            j = p;
            int k = 0;
            while(i<n && j<n){
              res[i][j] = vec[k];
              i++;
              j++;
              k++;
         }
         }
        return res;
    }
};