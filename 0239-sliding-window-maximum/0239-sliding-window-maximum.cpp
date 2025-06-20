class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
    deque<int> d;
    int size = nums.size();
    vector<int> ans;
    // d.push_front(nums[0]);
    // int j=1;
    for(int i=0;i<size;i++){
       if(!d.empty() && d.front()==i-k)
            d.pop_front();

        while(!d.empty() && nums[d.back()]<nums[i]){
            d.pop_back();
        }
        d.push_back(i);
        if(i>=k-1){
            ans.push_back(nums[d.front()]);
        }

    }      
    return ans;
    }
};