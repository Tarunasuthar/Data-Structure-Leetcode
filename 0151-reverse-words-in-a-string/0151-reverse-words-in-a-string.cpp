class Solution {
public:
    string reverseWords(string s) {
        string ans;
        int j=0;
        int i=0;
        int size = s.size();
        while(i<size){
            string ss;
            int f = 0;
            while(j<size && s[j]!=' '){
                ss += s[j];
                j++;
                f = 1;
            }
            if(f==0) j++;
            else{
            ans = ss +" "+ ans;
            }
            i = j;
        }
        ans.pop_back();
        return ans;
    }
};