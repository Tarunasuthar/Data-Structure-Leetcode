class Solution {
public:
    void dfs(int r,int c,vector<vector<bool>> &visited,vector<vector<int>> & grid){
        visited[r][c] = true;
        if(r>0 && grid[r-1][c]==1 && visited[r-1][c]==false){
            dfs(r-1,c,visited,grid);
        }
        if(c>0 && grid[r][c-1]==1 && visited[r][c-1]==false){
            dfs(r,c-1,visited,grid);
        }
        if(r<grid.size()-1 && grid[r+1][c]==1 && visited[r+1][c]==false){
            dfs(r+1,c,visited,grid);
        }
        if(c<grid[0].size()-1 && grid[r][c+1]==1 && visited[r][c+1]==false){
            dfs(r,c+1,visited,grid);
        }
    }
    int numEnclaves(vector<vector<int>>& grid) {
         int row = grid.size();
         int col = grid[0].size();
         vector<vector<bool>> visited(row,vector<bool>(col,false));

         for(int i=0;i<col;i++){
            if(grid[0][i]==1){
                dfs(0,i,visited,grid);
            }
        }
        for(int i=0;i<row;i++){
            if(grid[i][0]==1){
                dfs(i,0,visited,grid);
            }
        }
        for(int i=0;i<col;i++){
            if(grid[row-1][i]==1)
            dfs(row-1,i,visited,grid);
        }
        for(int i=0;i<row;i++){
            if(grid[i][col-1]==1){
                dfs(i,col-1,visited,grid);
            }
        }
        int count = 0;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]==1 && visited[i][j]==false)
                count++;
            }
        }
        return count;
    }
};