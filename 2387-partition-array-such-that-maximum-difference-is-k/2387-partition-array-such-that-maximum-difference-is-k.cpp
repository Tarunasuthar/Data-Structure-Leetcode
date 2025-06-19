class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        int size = nums.size();
        sort(nums.begin(),nums.end());
        int ans  = 1;
        int j=0;
        for(int i=0;i<size;i++){
            if(nums[i]-nums[j]>k){
            ans++;
            j=i;
           }
        }
        return ans;
    }
};