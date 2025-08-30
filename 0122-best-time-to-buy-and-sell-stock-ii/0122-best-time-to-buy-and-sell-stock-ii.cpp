class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int size = prices.size();
        vector<int> prefix(size,INT_MIN);
        
        for(int i=1;i<size;i++){
           prefix[i] = min(prices[i],prices[i-1]);
        }
        prefix[0] = prices[0];
        int sum = 0;
        for(int i=0;i<size;i++){
            if(prices[i]>prefix[i]){
                sum = prices[i]-prefix[i] + sum;
            }
        } 
        return sum;
    }
};