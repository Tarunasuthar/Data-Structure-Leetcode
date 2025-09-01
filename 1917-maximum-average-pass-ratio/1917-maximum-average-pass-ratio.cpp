class Solution {
public:
    double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {
        int size = classes.size();
        priority_queue<pair<double,int>> pq;

        for(int i=0;i<size;i++){
         pq.push({((double)(classes[i][0]+1)/(classes[i][1]+1) - (double)classes[i][0]/classes[i][1]),i});
        }

        while(extraStudents>0){
            int index = pq.top().second;
            pq.pop();
            classes[index][0] += 1;
            classes[index][1] += 1;
            double temp = (double)(classes[index][0]+1)/(classes[index][1]+1) - (double)classes[index][0]/classes[index][1];
            pq.push({temp,index});
            extraStudents--;
        }
        double ans = 0;
        for(int i=0;i<size;i++){
            ans = ans + (double)classes[i][0]/classes[i][1];
        }
        return ans/size;        
    }
};