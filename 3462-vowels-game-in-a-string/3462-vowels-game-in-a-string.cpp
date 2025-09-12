class Solution {
public:
    bool doesAliceWin(string s) {
            int size = s.size();
            for(int i=0;i<size;i++){
                if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o'|| s[i]=='u'){
                   return true;
                }
            }
       return false;
    }
};