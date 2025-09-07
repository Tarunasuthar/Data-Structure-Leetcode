class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> ans;
        int flag = 0;
        if(n%2!=0){
        n = n-1;
        flag = 1;
        }
        int i=1;
        while(n>0){
           ans.push_back(-i);
           ans.push_back(i);
           i++;
           n = n-2;
        }
        if(flag==1){
           ans.push_back(0);
        }
        return ans;
    }
};