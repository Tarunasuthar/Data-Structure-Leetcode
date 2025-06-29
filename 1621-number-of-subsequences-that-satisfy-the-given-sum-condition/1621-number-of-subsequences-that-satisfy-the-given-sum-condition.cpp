class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        int size = nums.size();
        sort(nums.begin(),nums.end());
        int j=size-1;
        int i=0;
        long long res = 0;
        int mod = 1e9+7;
        vector<int> power(size,1);
        for(int i=1;i<size;i++){
            power[i] = (power[i-1]*2)%mod;
        }
        while(i<=j){
            if(nums[j]+nums[i]>target){
                j--;
            }
            else{  
                res = (res + power[j-i]);
                i++;
            }
        }
        return res%mod;
    }
};