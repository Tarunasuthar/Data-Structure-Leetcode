class Solution {
public:
    int characterReplacement(string s, int k) {
        int size = s.size();
        int maxi = 0;
        int maxf = 0;
        map<char,int> mp;
        int i=0;
        int j=0;
        while(i<size){
            mp[s[i]]++;
            maxf = max(maxf,mp[s[i]]);
            while(((i-j+1)-maxf)>k){
                   mp[s[j]]--;
                   j++;
            }
            maxi = max(i-j+1,maxi);
            i++;
        }
        return maxi;
    }
};