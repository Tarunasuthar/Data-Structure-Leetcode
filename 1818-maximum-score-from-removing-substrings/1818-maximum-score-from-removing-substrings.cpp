class Solution {
public:
    int for_x(string &s,int x,char a, char b){
        stack<char> st;
            /// go for x
            int score = 0;
            int i=s.size()-1;
            while(i>=0){
                if(!st.empty() && st.top()==b && s[i]==a){
                    st.pop();
                    score += x;
                }
                else{
                    st.push(s[i]);
                }
                i--;
            }
            string t;
            while(!st.empty()){
                t += st.top();
                st.pop();
            }
            s = t;
            return score ;
    }
    int maximumGain(string s, int x, int y) {
        int score = 0;
        if(x>=y){
            score += for_x(s,x,'a','b');
            score += for_x(s,y,'b','a');
        }
        else{
            score += for_x(s,y,'b','a');
            score += for_x(s,x,'a','b');
        }
        return score;
    }
};