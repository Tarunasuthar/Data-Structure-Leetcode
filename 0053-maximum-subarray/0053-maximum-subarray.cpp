class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // int size = nums.size();
        int sum = 0;
        int maxi = INT_MIN;
        for(auto num:nums){
           sum = sum + num;
           if(sum>=0){
            maxi = max(maxi,sum);
           }
           else{
            maxi = min(maxi,sum);
            sum = 0;
           }
        }
        return maxi;
    }
};