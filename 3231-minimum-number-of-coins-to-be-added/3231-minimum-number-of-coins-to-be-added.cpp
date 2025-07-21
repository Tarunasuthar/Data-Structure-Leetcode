class Solution {
public:
    int minimumAddedCoins(vector<int>& coins, int target) {
        int size = coins.size();
        sort(coins.begin(),coins.end());
        int range = 0;
        int count = 0;
        int next;
        for(int i=0;i<size;i++){
            while(coins[i]>range+1){
                count++;
                next = range + 1;
                range = range + next;
                if(range>=target) return count;
            }
            range = range + coins[i];
            if(range>=target) return count;
        }
        while(range<target){
            count++;
            next = range + 1;
            range = range + next;
        }
      return count;
    }
};