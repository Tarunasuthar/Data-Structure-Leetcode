class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {
     sort(nums.begin(),nums.end());
     vector<int> one,second;
     int sum = 0;  
     for(auto n:nums){
        if(n%3==1){
            one.push_back(n);
        }
        else if(n%3==2){
            second.push_back(n);
        }
        sum += n;
     }
     if(sum%3==0){
        return sum;
     }
     int ans=0;
      if(sum%3==1){
        int r1=INT_MAX;
        int r2=INT_MAX;
        if(one.size()>=1){
           r1 = one[0];
        }
        if(second.size()>=2){
           r2 = second[1]+second[0];
        }
        ans = sum - min(r1,r2);
      }
      if(sum%3==2){
        int r1=INT_MAX;
        int r2=INT_MAX;
        if(one.size()>=2){
           r1 = one[1]+one[0];
        }
        if(second.size()>=1){
           r2 = second[0];
        }
        ans = sum - min(r1,r2);
      }
      if(ans==INT_MAX) return 0;
      return ans;
    }
};