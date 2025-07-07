class FindSumPairs {
public:
    vector<long long>nums1;
    vector<long long>nums2;
    map<long long,int> mp1;
    map<long long,int> mp2;
    FindSumPairs(vector<int>& nums1, vector<int>& nums2) {
        this->nums1 = vector<long long>(nums1.begin(),nums1.end());
        this->nums2 = vector<long long>(nums2.begin(),nums2.end());
        for(long long num:nums1){
            mp1[num]++;
        }
        for(long long num:nums2){
            mp2[num]++;
        }
    }
    void add(int index, int val) {
         int old = nums2[index];
         mp2[old]--;
         if(mp2[old]==0) mp2.erase(old);
         nums2[index] += val;
         mp2[nums2[index]]++;
      }
    
    int count(int tot) {
         int count = 0;
         for(auto m:mp1){
            if(mp2.find(tot-m.first)!=mp2.end()){
                count += m.second*mp2[tot-m.first];
            }
         }
         return count;
    }
};

/**
 * Your FindSumPairs object will be instantiated and called as such:
 * FindSumPairs* obj = new FindSumPairs(nums1, nums2);
 * obj->add(index,val);
 * int param_2 = obj->count(tot);
 */