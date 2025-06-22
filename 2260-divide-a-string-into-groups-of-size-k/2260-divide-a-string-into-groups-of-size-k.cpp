class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        while(s.size()%k != 0){
           s += fill;
        }
        int size = s.size();
        vector<string> res;
        for(int i=0;i<size;i+=k){
            res.push_back(s.substr(i,k));
        }
        return res;
    }
};