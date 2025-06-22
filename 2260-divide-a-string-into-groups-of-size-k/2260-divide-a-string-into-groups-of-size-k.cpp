class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        int size = s.size();
        vector<string> res;
        string t2;
        int i=0;
        while(i<size){
            string temp;
            int j=0;
            while(i<size && j<k){
                temp = temp + s[i];
                j++;
                i++;
            }
            if(temp.size()==k)
            res.push_back(temp);
            else{
            t2 = temp;
            }
        }
        if(t2.size()>0 && t2.size()<k){
        while(t2.size()<k){
            t2 = t2+fill;
        }
        res.push_back(t2);
        }
        return res;
    }
};