class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int size = arr.size();
        int sum = 0;
        for(int i=0;i<size;i++){
           sum = sum + arr[i];
        }
        if(sum%3!=0){
            return false;
        }
        int target = sum/3;
        int check = 0;
        int count = 0;
        for(int i=0;i<size;i++){
            check += arr[i];
            if(check==target){
                check = 0;
                count++;
            }
        }
        if(count>=3){
            return true;
        }
        return false;
    }
};