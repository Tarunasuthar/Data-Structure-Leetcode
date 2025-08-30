class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++){
            map<char,int>mp1;
            map<char,int>mp2;
            map<char,int>mp3;
            for(int j=0;j<9;j++){
                if((board[i][j]!='.' && mp1[board[i][j]]) || (board[j][i]!='.' && mp2[board[j][i]])){
                    return false;
                }
                mp2[board[j][i]]++;
                mp1[board[i][j]]++;

                int row = 3*(i/3)+j/3;
                int col = 3*(i%3)+j%3;
                if(board[row][col]!='.' && mp3[board[row][col]]) return false;
                mp3[board[row][col]]++;
            }
        }
        return true;
    }
};