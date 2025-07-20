class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        sort(folder.begin(),folder.end());
        int size = folder.size();
        vector<string> ans;
        ans.push_back(folder[0]);

        for(int i=1;i<size;i++){
            if(folder[i].substr(0,ans.back().size()+1)!= ans.back()+'/'){
                ans.push_back(folder[i]);
            }
        }
        return ans;
    }
};