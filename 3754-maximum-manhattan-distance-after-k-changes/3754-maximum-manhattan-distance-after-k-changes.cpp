class Solution {
public:
    int maxDistance(string s, int k) {
        int size = s.size();
        int so=0,n=0,w=0,e=0;
        int ans = 0;
        for(int i=0;i<size;i++){
            if(s[i]=='S') so++;
            else if(s[i]=='N') n++;
            else if(s[i]=='E') e++;
            else if(s[i]=='W') w++;
            ans = max(ans,min(abs(so-n)+abs(e-w)+2*k,i+1));
        }
        return ans;
    }
};