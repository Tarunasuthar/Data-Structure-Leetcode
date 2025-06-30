class Solution {
public:
    int findLHS(vector<int>& nums) {
        int size = nums.size();
        if(size == 1)
        return 0;
        int ans = 0;
        sort(nums.begin(),nums.end());
        // int f = nums[0];
        int i=0;
        while(i<size){
            int j=i+1;
             while(j<size && nums[j]-nums[i]<=1){
                j++;
             }
             if(nums[j-1]-nums[i]==1)
             ans = max(ans,j-i);
             i++;
        }
        return ans;
    }
};