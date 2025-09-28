class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int size = nums.size();
        int i = size-1;
        int maxi = 0;
        while(i>=2){
            if(nums[i-1]+nums[i-2]>nums[i])
                 return nums[i-1]+nums[i-2]+nums[i];
            i--;
        }         
        return 0;
    }
};