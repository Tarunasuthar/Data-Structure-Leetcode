class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
          int full = 0;
          int a = numBottles;
          int count = 0;
          while(numBottles>=numExchange){
            numBottles = numBottles-numExchange;
            numExchange++;
            numBottles++;
            full++;
          }
          return a + full;
    }
};