class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        vector<int> vec(nums.begin(),nums.end());
        sort(nums.begin(),nums.end());
        int a = nums.back();
        int ans;
        int size = nums.size();
        for(int i=0;i<size;i++){
            if(vec[i]==a){
            ans = i;
            break;
        }}
        return ans;
    }
};