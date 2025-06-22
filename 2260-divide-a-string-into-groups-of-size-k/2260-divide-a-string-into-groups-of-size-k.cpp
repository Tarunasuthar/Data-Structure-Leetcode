class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        int size = s.size();
        vector<string> res;
        string t2;
        int i=1;
        while(i<=size){
            t2 = t2+s[i-1];
            if(i%k==0){
               res.push_back(t2);
               t2 = "";
            }
            i++;
        }
        if(t2.size()>0 && t2.size()<k){
            while(t2.size()<k){
                t2 = t2 + fill;
            }
            res.push_back(t2);
        }
        return res;
    }
};