class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {  
        int fill = numBottles;
        while(numBottles>=numExchange){
            fill = fill + numBottles/numExchange;
            numBottles = numBottles/numExchange + numBottles%numExchange;
        }
        return fill;
    }
};