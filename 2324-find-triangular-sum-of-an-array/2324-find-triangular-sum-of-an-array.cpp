class Solution {
public:
    int op(vector<int>& nums){
        if(nums.size()==1) return nums[0];
        int size = nums.size();
        vector<int> new_nums;
        for(int i=0;i<size-1;i++){
            new_nums.push_back((nums[i]+nums[i+1])%10);
        }
        return op(new_nums);
    }
    int triangularSum(vector<int>& nums) {
        return op(nums);
    }
};