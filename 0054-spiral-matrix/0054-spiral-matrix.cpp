class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> vec;
        int top = 0;
        int bot = matrix.size()-1;
        int left = 0;
        int right = matrix[0].size()-1;
        int i;
        while((top<=bot) && (left<=right)){
        i = left;
        while(i<=right){
            vec.push_back(matrix[top][i]);
            i++;
        }
        top = top + 1;
        i = top;
        while(i<=bot){
            vec.push_back(matrix[i][right]);
            i++;
        }
        right -= 1;
        i = right;
        if(top<bot){
        while(i>=left){
            vec.push_back(matrix[bot][i]);
                i--;
        }
        }
        bot--;
        i = bot;
        if(left<right){
        while(i>=top){
            vec.push_back(matrix[i][left]);
            i--;
        }
        left++;
        }
        }
        return vec;
    }
};