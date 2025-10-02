class Solution {
public:
    string removeOuterParentheses(string s) {
        int size = s.size();
        string ans;
        int op = 0;
        for(int i=0;i<size-1;i++){
            if(s[i]=='('){
                if(op>0){
                ans += s[i];
                }
                op++;
            }
            else{
                op--;
                if(op>0){
                    ans += s[i];
                }
            }
        }
        return ans;
    }
};