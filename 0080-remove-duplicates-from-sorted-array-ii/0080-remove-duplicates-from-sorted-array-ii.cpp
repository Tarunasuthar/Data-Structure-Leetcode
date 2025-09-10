class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
         int size = nums.size();
         map<int,int> mp;
         for(int i=0;i<size;i++){
            mp[nums[i]]++;
         }
         int i = 0;
         for(auto m: mp){
            int j=m.second;
            int n = 0;
            while(n<j && n<2){
                nums[i] = m.first;
                i++;
                n++;
            }
         }
         return i;
    }
};