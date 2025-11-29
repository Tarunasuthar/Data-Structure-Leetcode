class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int sum = 0;
        for(auto n:nums){
           sum += n%k;
           sum = sum%k;
        }
        return sum;
    }};