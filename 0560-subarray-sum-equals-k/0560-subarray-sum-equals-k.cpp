class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int size = nums.size();
        map<int,int> mp;
        mp[0] = 1;
        int sum = 0;
        int count = 0;
        for(int i=0;i<size;i++){
             sum = sum + nums[i];
             if(mp.find(sum-k)!=mp.end()){
                count += mp[sum-k];
             }
             mp[sum]++;
        }
        return count;
    }
};