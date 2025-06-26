class Solution {
public:
    void dfs(int r,int c,vector<vector<bool>> &visited,vector<vector<char>> & board){
        visited[r][c] = true;
        if(r>0 && board[r-1][c]=='O' && visited[r-1][c]==false){
            dfs(r-1,c,visited,board);
        }
        if(c>0 && board[r][c-1]=='O' && visited[r][c-1]==false){
            dfs(r,c-1,visited,board);
        }
        if(r<board.size()-1 && board[r+1][c]=='O' && visited[r+1][c]==false){
            dfs(r+1,c,visited,board);
        }
        if(c<board[0].size()-1 && board[r][c+1]=='O' && visited[r][c+1]==false){
            dfs(r,c+1,visited,board);
        }
    }


    void solve(vector<vector<char>>& board) {
        int row = board.size();
        int col = board[0].size();

        vector<vector<bool>> visited(row,vector<bool>(col,false));
        
        for(int i=0;i<col;i++){
            if(board[0][i]=='O'){
                dfs(0,i,visited,board);
            }
        }
        for(int i=0;i<row;i++){
            if(board[i][0]=='O'){
                dfs(i,0,visited,board);
            }
        }
        for(int i=0;i<col;i++){
            if(board[row-1][i]=='O')
            dfs(row-1,i,visited,board);
        }
        for(int i=0;i<row;i++){
            if(board[i][col-1]=='O'){
                dfs(i,col-1,visited,board);
            }
        }

        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(board[i][j]=='O' && visited[i][j]==false)
                board[i][j] = 'X';
            }
        }
    }
};