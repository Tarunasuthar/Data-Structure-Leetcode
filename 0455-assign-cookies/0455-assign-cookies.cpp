class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int i=0;
        int j=0;
        int s_size = s.size();
        int g_size = g.size();
        int count = 0;
        while(j<s_size && i<g_size){
           if(g[i]<=s[j]){
            i++;
            j++;
            count++;
           }
           else{
            j++;
           }
        }
        return count;
    }
};