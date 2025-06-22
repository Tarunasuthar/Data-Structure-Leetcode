class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        while(s.size()%k != 0){
           s += fill;
        }
        int size = s.size();
        vector<string> res;
        string t2;
        int i=1;
        while(i<=size){
            t2 += s[i-1];
            if(i%k==0){
               res.push_back(t2);
               t2 = "";
            }
            i++;
        }
        return res;
    }
};