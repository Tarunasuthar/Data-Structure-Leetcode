class Solution {
public:
    bool canReorderDoubled(vector<int>& arr) {
        int size = arr.size();
        sort(arr.begin(),arr.end(), [](int a, int b) {
            return abs(a) < abs(b);
        });
        map<int,int> mp;
        int c = 0;
        for(auto n:arr){
            if(n==0) c++;
            else{
            mp[n]++;}
        } 
        if(c%2!=0) return false;
        for(int i=0;i<size;i++){
            if(mp[arr[i]]>0 && mp[arr[i]*2]>0){
                mp[arr[i]*2]--;
                mp[arr[i]]--;
            }
            else if(mp[arr[i]]>0 && mp[arr[i]*2]<1){
                return false;
            }
        }
        return true;
    }
};
       