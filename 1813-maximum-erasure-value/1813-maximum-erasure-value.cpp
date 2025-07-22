class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int size = nums.size();
        if(size == 1) return nums[0];
        int sum = 0;
        int ans = INT_MIN;
        map<int,int> mp;
        int i=0;
        int j=0;
        while(i<size){
           if(mp.find(nums[i])!=mp.end() && mp[nums[i]]>=j){
            while(j<=mp[nums[i]]){
                sum = sum-nums[j];
                j++;
            }
           }
           sum += nums[i];
           mp[nums[i]] = i;
           ans = max(ans,sum);
           i++;
        }
        return ans;
    }
};