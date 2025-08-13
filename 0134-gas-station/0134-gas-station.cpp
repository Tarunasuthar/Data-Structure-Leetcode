class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int size = gas.size();
        int totgas = 0;
        int totcost = 0;
        for(int i=0;i<size;i++){
            totgas += gas[i];
            totcost += cost[i];
        }
        if(totgas<totcost){
            return -1;
        }
        int inti = 0;
        int curr = 0;

        for(int i=0;i<size;i++){
            curr += gas[i]-cost[i];

            if(curr<0){
                inti = i+1;
                curr = 0;
            }
        }
        
        return inti;
    }
};