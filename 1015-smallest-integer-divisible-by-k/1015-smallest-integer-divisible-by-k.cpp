class Solution {
public:
    int smallestRepunitDivByK(int k) {
        long long n = 1;
        int p = 1;
        map<int,int> mp;
        int r = n%k;
        int c = 1;
        while(c<=k){
            r = n%k;
            if(r==0){
                return c;
            }
            c++;
            if(mp.find(r)!=mp.end()){
                mp[r] = 1;
            }
            n = r*10+1;
        }
        return -1;
    }
};