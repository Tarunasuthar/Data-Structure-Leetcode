class Solution {
public:
    int beautySum(string s) {
        map<char,int> mp;
        int size = s.size();
        for(int i=0;i<size;i++){
            mp[s[i]]++;
        }
        int beauty = 0;
        for(int i=0;i<size;i++){
            int j = size-1;
            map<char,int> temp = mp;
            while(j>=i){
                int maxi = 0;
                int mini = 501;
                for(auto m:temp){
                    if(m.second>0){
                    maxi = max(maxi,m.second);
                    mini = min(mini,m.second);
                    }
                }
                beauty += maxi-mini;
                temp[s[j]]--;
                j--;
            }
            mp[s[i]]--;
        }
        return beauty;
    }
};