class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        int size = nums.size();
        sort(nums.begin(),nums.end());
        int i=0;
        while(i<size-2){
            int j=i+1;
            int k=size-1;
            while(j<k){
            if((nums[i]+nums[j]+nums[k])==0){
                res.push_back({nums[i],nums[j],nums[k]});
                int prev_j = nums[j];
                while(j<k && prev_j==nums[j]){
                    j++;
                }
                int prev_k = nums[k];
                while(k>j && prev_k==nums[k]){
                    k--;
                }
            }
            else if((nums[i]+nums[j]+nums[k])<0){
                j++;
            }
            else{
                k--;
             }
            }
            int prev_i = nums[i];
            while(i<size-2 && prev_i==nums[i]){
                i++;
            }
        }
        return res;
    }
};