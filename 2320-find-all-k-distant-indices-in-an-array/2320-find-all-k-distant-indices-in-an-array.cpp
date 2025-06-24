class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        vector<int> vec;
        int size = nums.size();
        for(int i=0;i<size;i++){
            if(nums[i]==key)
            vec.push_back(i);
        }
        vector<int> res;
        for(int i=0;i<size;i++){
            for(int j=0;j<vec.size();j++){
                if(abs(i-vec[j])<=k){
                res.push_back(i);
                break;
                }
            }
        }
        return res;
    }
};