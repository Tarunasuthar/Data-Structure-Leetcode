class Solution {
public:
    string largestOddNumber(string num) {
        int size = num.size();
        int j = size-1;
        while(j>=0){
            if(int(num[j])%2!=0){
                break;
            }
            j--;
        }
        string ans = "";
        for(int i=0;i<=j;i++){
           ans += num[i];
        }
        return ans;
    }
};