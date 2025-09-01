class Solution {
public:
    string simplifyPath(string path) {
        
        string ans;
        string temp;
        stack<string> st;
        int size = path.size();
        stringstream ss(path);

        while(getline(ss,temp,'/')){
          if(temp == "" || temp == ".") 
          continue;
          else if(temp == ".."){
            if(!st.empty()){
                st.pop();
            }
          }
          else{
            st.push(temp);
          }
        }
        while(!st.empty()){
            ans = '/' + st.top() + ans;
            st.pop();
        }
        if(ans.size() == 0) return "/";
        return ans;
   }
};