class Solution {
public:
    void all_sub(int ind,vector<int>&nums,vector<int>&path,vector<vector<int>>& all){
        // base case
        if(ind == nums.size()){
            all.push_back(path);
            return ;
        }
        //take
        path.push_back(nums[ind]);
        all_sub(ind+1,nums,path,all);
        // not take
        path.pop_back();
        all_sub(ind+1,nums,path,all);
    }
    int countMaxOrSubsets(vector<int>& nums) {
        vector<vector<int>> all;
        vector<int> path;
        all_sub(0,nums,path,all);
        int size = all.size();
        int maxi = 0;
        int count = 0;
        for(int i=0;i<size;i++){
            int orr = 0;
            for(int j=0;j<all[i].size();j++){
                orr = orr|all[i][j];
            }
            if(orr==maxi){
                count++;
            }
            else if(orr>maxi){
                maxi = orr;
                count = 1;
            }
        }
        return count;
    }
};