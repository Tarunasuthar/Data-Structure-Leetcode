class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int size = s.size();
        vector<int> visited(256,-1);
        int l=0;
        int r=0;
        int max_len = 0;
        while(r<size){
            if(visited[s[r]]<l){
                visited[s[r]] = r;
            }
            else{
                l = visited[s[r]]+1;
                visited[s[r]] = r;
            }
               max_len = max(max_len,r-l+1);
               r++;
            
        }
        return max_len;
    }
};