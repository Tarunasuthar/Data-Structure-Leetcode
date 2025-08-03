class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int size = nums.size();
        int sum = 0;
        map<int,int> mp;
        for(int i=0;i<size;i++){
            nums[i] = nums[i]%k;
        }
        int count = 0;
        for(int i=0;i<size;i++){
            count = 0;
            while(i<size && nums[i]==0){
                count++;
                i++;
            }
            if(count>1) return true;
            // i--;
        }
        // if(mp[0]>1) return true;
        mp[0] = -1;
        for(int i=0;i<size;i++){
            sum = sum + nums[i];
            if(mp.find(sum%k)!=mp.end()){
                if(i-mp[sum%k]>1)
                return true;
            }
            mp[sum%k] = i;
        }
        // if(sum==0) return true;
        return false;
    }
};