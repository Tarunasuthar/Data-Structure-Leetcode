class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int,int> mp;
        int size = arr.size();
        for(int i=0;i<size;i++){
            mp[arr[i]]++;
        }
        int maxi = -1;
        for(auto m:mp){
            if(m.first == m.second){
                maxi = max(maxi,m.first);
            }
        }
        return maxi;
    }
};