class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mp;
        int size = nums.size();
        for(int i=0;i<size;i++){
            mp[nums[i]] = i;
        }
        for(int i=0;i<size;i++){
            if(mp.find(target-nums[i])!=mp.end() && mp[target-nums[i]]!=i){
                return {i,mp[target-nums[i]]};
            }
        }
        return {};
    }
};