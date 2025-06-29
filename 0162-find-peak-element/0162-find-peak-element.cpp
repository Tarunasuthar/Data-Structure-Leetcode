class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int size = nums.size();
        if(size == 1)
        return 0;
        vector<int> vec(size+2);
        for(int i=0;i<size;i++){
            vec[i+1] = nums[i];
        }
        vec[0] = INT_MIN;
        vec[size+1] = INT_MIN;
        int ans;
        for(int i=1;i<size+1;i++){
            if(vec[i]>vec[i-1] && vec[i]>vec[i+1]){
                ans = i-1;
                break;
            }
        }
        return ans;
    }
};