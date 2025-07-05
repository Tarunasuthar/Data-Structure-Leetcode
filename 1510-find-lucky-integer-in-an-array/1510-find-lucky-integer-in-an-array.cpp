class Solution {
public:
    int findLucky(vector<int>& arr) {
        int size = arr.size();
        vector<int> count(501,0);
        for(int i=0;i<size;i++){
            count[arr[i]]++;
        }
        int maxi = -1;
        for(int i=0;i<501;i++){
            if(count[i]==i && count[i]!=0){
                maxi = max(maxi,i);
            }
        }
        return maxi;
    }
};