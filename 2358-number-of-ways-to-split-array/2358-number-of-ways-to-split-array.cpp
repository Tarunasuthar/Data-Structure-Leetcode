class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int size = nums.size();
        vector<long long> preSum;
        vector<long long> nextSum(size);
        long long p_sum = 0;
        for(int i=0;i<size;i++){
          p_sum += nums[i];
          preSum.push_back(p_sum);
        }
        p_sum = 0;
        for(int i=size-1;i>=0;i--){
            p_sum += nums[i];
            nextSum[i] = p_sum;
        }
        int count = 0;
        for(int i=0;i<size-1;i++){
           if(preSum[i]>=nextSum[i+1]){
            count++;
           }
        }
        return count;
    }
};