class Solution {
public:
    int minMoves(vector<int>& nums) {
        int size = nums.size();
        sort(nums.begin(),nums.end());
        int mini = nums[0];
        int m = 0;
        for(int i=0;i<size;i++){
            m = nums[i]-mini + m;
        }
        return m;
    }
};