class Solution {
public:
    void all_sub(int ind,vector<int>&nums,vector<int>&path,set<vector<int>>&st){
        if(ind == nums.size()){
            st.insert(path);
            return ;
        }
        // take
        path.push_back(nums[ind]);
        all_sub(ind+1,nums,path,st);
        // not take
        path.pop_back();
        all_sub(ind+1,nums,path,st);
    }


    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>> st;
        vector<int> path;
        sort(nums.begin(),nums.end());
        all_sub(0,nums,path,st);

        vector<vector<int>> ans(st.begin(),st.end());
        return ans;
    }
};