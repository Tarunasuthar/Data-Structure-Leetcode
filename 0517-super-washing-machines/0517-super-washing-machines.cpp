class Solution {
public:
    int findMinMoves(vector<int>& machines) {
        int size = machines.size();
        int sum = 0;
        for(int i=0;i<size;i++){
            sum += machines[i];
        }
        if(sum%size!=0){
            return -1;
        }
        if(sum==0){
            return 0;
        }
        int avg = sum/size;
        vector<int> move(size);
        int result = 0;
        for(int i=0;i<size-1;i++){
            if(machines[i]<avg){
                move[i+1] = avg-machines[i];
                machines[i+1] -= avg-machines[i];
                machines[i] = avg;
                result = max(result,move[i+1]);
            }
            else{
                move[i] += machines[i]-avg;
                machines[i+1] += machines[i]-avg;
                machines[i] = avg;
                result = max(result,move[i]);
            }
        }
        return result;
    }
};