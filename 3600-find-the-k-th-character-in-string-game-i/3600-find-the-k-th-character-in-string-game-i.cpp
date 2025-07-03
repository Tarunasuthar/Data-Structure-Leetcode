class Solution {
public:
    void genrator(string &s , int k){
        if(s.size()>=k){
            return ;
        }
        string t;
        for(int i=0;i<s.size();i++){
           if(s[i]=='z'){
            t = t+'a';
           }
           else{
            t += s[i]+1;
           }
        }
        s += t;
        genrator(s,k);
        return ;

    }
    char kthCharacter(int k) {
        string s = "a";
        genrator(s,k);
        return s[k-1];
    }
};