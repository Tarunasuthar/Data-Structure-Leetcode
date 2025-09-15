class Solution {
public:
    int evensum(vector<int>&num){
        int sum = 0;
        for(auto n:num){
            if(n%2==0){
              sum += n;
            }
        }
        return sum;
    }
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int size = queries.size();
        int s = nums.size();
        vector<int> ans;
        for(int i=0;i<size;i++){
            int ind = queries[i][1];
            int val = queries[i][0];
            nums[ind] += val;
            ans.push_back(evensum(nums));
        }
        return ans;
    }
};