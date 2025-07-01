class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int size = s.size();
        if(size == 0){
            return 0;
        }
        int count = INT_MIN;
        for(int i=0;i<size;i++){
            string sub;
            map<char,int> mp;
            for(int j=i;j<size;j++){
                if(mp[s[j]]>0){
                    break;
                }
                    mp[s[j]]++;
                    count = max(count,j-i+1);
                }
         }
        return count;
    }
};