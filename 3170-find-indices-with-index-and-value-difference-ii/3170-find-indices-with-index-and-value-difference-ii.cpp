class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int indexDifference, int valueDifference) {
         int size = nums.size();
         int maxi = nums[0], max_index = 0;
         int mini = nums[0], min_index = 0;
         for(int i=indexDifference;i<size;i++){
             if(nums[i-indexDifference]>maxi){
                maxi = nums[i-indexDifference];
                max_index = i-indexDifference;
             }
             if(nums[i-indexDifference]<mini){
                mini = nums[i-indexDifference];
                min_index = i-indexDifference;
             }
             if(abs(maxi-nums[i])>=valueDifference){
                return {max_index,i};
             }
             if(abs(mini-nums[i])>=valueDifference){
                return {min_index,i};
             }
         }
         return {-1,-1};
    }
};