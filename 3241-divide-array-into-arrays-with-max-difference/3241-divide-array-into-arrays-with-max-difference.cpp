class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        int size = nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        int j=0;
        for(int i=0;i<size;i+=3){
            if(nums[i+2]-nums[i+1]<=k && nums[i+2]-nums[i]<=k && nums[i+1]-nums[i]<=k){
                ans.push_back({nums[i],nums[i+1],nums[i+2]});
                
            }
            else{
                return {};
            }
        }
        return ans;

    }
};