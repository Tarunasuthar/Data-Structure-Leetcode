class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int size = nums.size();
        sort(nums.begin(),nums.end());
        
        // if((mini+maxi)%2==0){
        int n1 = nums[size/2];
        // }
        // else{
        //     n1 = (mini+maxi)/2;

        // }
        int move = 0;
        for(int i=0;i<size;i++){
            move = move + abs(n1-nums[i]);
        }
        return move;
    }
};