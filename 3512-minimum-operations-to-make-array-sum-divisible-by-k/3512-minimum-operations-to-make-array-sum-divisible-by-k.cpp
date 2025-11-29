class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int sum = 0;
        for(auto n:nums){
           sum += n;
        }
        int o = 0;
        while(sum%k!=0){
            sum--;
            o++;
        }
        return o;
    }
};