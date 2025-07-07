class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        int size = nums.size();
        long long count = 0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<size;i++){
            int low = lower-nums[i];
            int up = upper-nums[i];
            int l = lower_bound(nums.begin()+i+1,nums.end(),low)-nums.begin();
            int r = upper_bound(nums.begin()+i+1,nums.end(),up)-nums.begin();
         count += r-l;
        }
        return count;
    }
};