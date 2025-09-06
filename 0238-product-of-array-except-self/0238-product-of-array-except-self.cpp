class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int size = nums.size();
        // int p = 1;
        vector<int> pre(size,0);
        vector<int> suf(size,0);
        pre[0] = 1;
        pre[1] = nums[0];
        for(int i=2;i<size;i++){
            pre[i] = nums[i-1]*pre[i-1];
        }
        // p = 1;
        suf[size-1] = 1;
        suf[size-2] = nums[size-1];
        for(int j=size-3;j>=0;j--){
            suf[j] = nums[j+1]*suf[j+1];
        }
        vector<int> ans;
        for(int i=0;i<size;i++){
            ans.push_back(pre[i]*suf[i]);
        }
        return ans;
    }
};