class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        int size = changed.size();
        sort(changed.begin(),changed.end());
        vector<int> ans;
        map<int,int> mp;
        int c = 0;
        for(auto n:changed){
            if(n==0) c++;
            else{
            mp[n]++;}
        } 
        if(c%2!=0) return {};
        else{
            int p = c/2;
            while(p>0){
              ans.push_back(0);
              mp[0]--;
              p--;
            }
        }
        for(int i=0;i<size;i++){
            if(mp[changed[i]]>0 && mp[changed[i]*2]>0){
                ans.push_back(changed[i]);
                mp[changed[i]*2]--;
                mp[changed[i]]--;
            }
            else if(mp[changed[i]]>0 && mp[changed[i]*2]<1){
                return {};
            }
        }
        return ans;
    }
};