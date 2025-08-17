class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),[](auto &a,auto &b){
            return a[1]<b[1];
        });

        int size = intervals.size();
        int count = 0;
        int e1 = intervals[0][1];
        for(int i=1;i<size;i++){
           int s2 = intervals[i][0];
           if(e1<=s2){
              e1 = intervals[i][1];
           }
           else{
            count++;
           }
        }
        return count;
    }
};