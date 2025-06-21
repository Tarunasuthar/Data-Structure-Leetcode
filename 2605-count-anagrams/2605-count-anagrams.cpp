class Solution {
public:
    int mod = 1e9+7;
    long long fact(int x){
        long long ans = 1;
        for(int k=2;k<=x;k++){
            ans = (ans*k)%mod;
        }
        return ans%mod;
    }

    long long inv_mod_fact(long long base){
        long long exp = mod-2;
        long long res = 1;
        while(exp>0){
            if(exp%2==1){
                res = (res*base)%mod;
                exp--;
            }
            exp = exp/2;
            base = (base*base)%mod;
        }
        return res%mod;
    }
    int countAnagrams(string s) {
        int size = s.size();
        long long ans = 1;
        int i=0;
        while(i<size){
            int j=i;
            while(j<size && (s[j]!=' ')){
                 j++;
            }
            map<int,int>mp;
            for(int k=i;k<j;k++){
                mp[s[k]]++;
            }
            int temp = fact(j-i)%mod;
            for(auto m: mp){
                if(m.second>1){
                    temp = (temp*inv_mod_fact(fact(m.second)))%mod;
                }
            }
            ans = (ans*temp)%mod;
            i = j+1;
        }
        return ans%mod;
    }
};