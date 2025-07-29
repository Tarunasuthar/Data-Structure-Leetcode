class Solution {
public:

    int maxProduct(vector<int>& nums) {
         int size = nums.size();
         int maxi = INT_MIN;
         for(int i=0;i<size;i++){
            int pro = 1;
            for(int j=i;j<size;j++){
                pro *= nums[j];
                maxi = max(pro,maxi);
            }
         }
         return maxi;
    }
};