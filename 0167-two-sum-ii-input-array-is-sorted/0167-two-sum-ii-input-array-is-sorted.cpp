class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int size = numbers.size();
        int i=size-1;
        int j=0;
        while(j<i){
            int sum = numbers[i]+numbers[j];
            if(sum==target){
                return {j+1,i+1};
            }
            else if(sum<target){
                j++;
            }
            else{
               i--;
            }
        }
        return {};
    }
};