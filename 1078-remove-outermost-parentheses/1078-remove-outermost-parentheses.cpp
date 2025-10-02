class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> st;
        string ans;
        int c = 0;
        for(auto num:s){
           if(num=='('){
              st.push(num);
              if(st.size()>1){
                ans += num;
              }
           }
           else{
            if(st.size()>1){
                st.pop();
                ans += num;
            }
            else{
                st.pop();
                // continue;
            }
           }
           
        }
        return ans;
    }
};