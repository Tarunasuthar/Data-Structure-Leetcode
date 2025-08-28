class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> vec(n,vector<int>(n,0));  
        int top = 0;
        int bot = n-1;
        int left = 0;
        int right = n-1;
        int i;
        int no = 1;
        while((top<=bot) && (left<=right)){
            i = left;
            while(i<=right){
                vec[top][i] = no;
                no++;
                i++;
            }
            top++;
            i = top;
            while(i<=bot){
                vec[i][right] = no;
                no++;
                i++;
            }
            right--;
            i = right;
            if(top<=bot){
            while(i>=left){
                vec[bot][i] = no;
                no++;
                i--;
            }
            bot--;
            }
            i = bot;
            if(left<=right){
            while(i>=top){
                vec[i][left] = no;
                no++;
                i--;
            }
            left++;
            }
        }
        return vec;
    }
};