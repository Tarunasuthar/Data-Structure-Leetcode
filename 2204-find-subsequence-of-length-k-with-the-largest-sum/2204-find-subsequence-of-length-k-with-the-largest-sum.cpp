class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
         vector<pair<int,int>> vec;
         int size = nums.size();
         for(int i=0;i<size;i++){
            vec.push_back({nums[i],i});
         }
         sort(vec.begin(),vec.end(),[](const pair<int,int>&a,const pair<int,int>&b){
            return a.first>b.first;
         });
         vector<pair<int,int>> res;
         for(int i=0;i<k;i++){
            res.push_back({vec[i].second,vec[i].first});
         }
         sort(res.begin(),res.end(),[](const pair<int,int>&a,const pair<int,int>&b){
            return a.first<b.first;
         });
         vector<int> ans;
         for(int i=0;i<k;i++){
            ans.push_back(res[i].second);
         }
        return ans;
    }
};