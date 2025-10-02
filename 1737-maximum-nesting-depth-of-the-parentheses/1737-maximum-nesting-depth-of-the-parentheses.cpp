class Solution {
public:
    int maxDepth(string s) {
         stack<char> st;
         int ans = 0;
         for(auto n:s){
            if(n=='('){
                st.push(n);
            }
            else if(n==')'){
                ans = max(ans,(int)st.size());
                st.pop();
            }
         }
         return ans;
    }
};