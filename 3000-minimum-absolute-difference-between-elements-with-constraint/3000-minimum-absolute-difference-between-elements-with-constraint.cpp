class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums, int x) {
        int size = nums.size();
        int mini = INT_MAX;
        if(size<x)
        return -1;
        
        set<int> st;
        for(int j=x;j<size;j++){
            st.insert(nums[j-x]);
            auto it = st.lower_bound(nums[j]);
            if(it!=st.end()){
                mini = min(mini,abs(*it-nums[j]));
            }
            it--;
            if(it!=st.end()){
                mini = min(mini,abs(*it-nums[j]));
            }

        }
        return mini;
    }
};