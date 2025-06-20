class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int size = strs.size();
        unordered_map<string,vector<string>>mp;
        for(int i=0;i<size;i++){
            string k = strs[i];
            sort(k.begin(),k.end());
            mp[k].push_back(strs[i]);
        }
        vector<vector<string>> ans;
        for(auto m: mp){
            ans.push_back(m.second);
        }
        return ans;
    }
};