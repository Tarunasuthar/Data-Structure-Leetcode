class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        int size = nums.size();
        unordered_map<int,int> mp;
        int mini = size;
        long long sum = 0;
        for(int i=0;i<size;i++){
            sum += nums[i];
        }
        if(sum%p==0) return 0;
        int target = sum%p;
        int currSum = 0;
        mp[0] = -1;
        for(int i=0;i<size;i++){
            currSum = (nums[i]+currSum)%p;
            int val = (currSum-target+p)%p;
            if(mp.count(val)>0){
               mini = min(mini,i-mp[val]);
            }
            mp[currSum%p] = i;
        }
        if(mini == size) return -1;
        return mini;
    }
};