class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        set<int> st;
        map<int,int> mp;
        int size = nums.size();
        for(int i=0;i<size;i++){
            st.insert(nums[i]);
            mp[nums[i]]++;
        }
        int ans;
        while(!st.empty()){
            int a = *prev(st.end());
            if(k>mp[a]){
                k = k-mp[a];
                st.erase(a);
            }
            else{
               ans = a;
               break;
            }
        }
         return ans;
    }
};