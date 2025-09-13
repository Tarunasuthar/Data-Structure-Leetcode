class Solution {
public:
    int maxFreqSum(string s) {
        map<char,int>mp;
         for(int i=0;i<s.size();i++){
           mp[s[i]]++;
         }
         int maxi_v = 0;
         int maxi_c = 0;
         for(auto m:mp){
             if(m.first=='a' || m.first=='e' || m.first=='i' || m.first=='o'|| m.first=='u'){
                   maxi_v = max(m.second,maxi_v);
                }
            else{
                maxi_c = max(m.second,maxi_c);
            }
         }
         return maxi_c+maxi_v;
    }
};