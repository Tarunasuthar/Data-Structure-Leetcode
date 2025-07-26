class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int size = nums.size();
        vector<long long> preSum;
        long long p_sum = 0;
        int count = 0;
        for(int i=0;i<size;i++){
          p_sum += nums[i];
          preSum.push_back(p_sum);
        }
        for(int i=0;i<size-1;i++){
            if(preSum[i]>=(p_sum-preSum[i])){
                count++;
            }
        }
        return count;
    }
};