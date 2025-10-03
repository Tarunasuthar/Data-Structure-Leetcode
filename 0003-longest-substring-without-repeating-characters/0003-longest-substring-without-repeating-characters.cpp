class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int size = s.size();
        int ans = 0;
        map<char,int> mp;
        int i = 0;
        for(int j=0;j<size;j++){
            while(mp.find(s[j])!=mp.end()){
                mp.erase(s[i]);
                i++;
            }
            mp[s[j]]++;
            ans = max(ans,j-i+1);
        }
        return ans;
    }
};