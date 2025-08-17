class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end(),[](auto &a,auto & b){
            return a[1]<b[1];
        });
        int count=1;
        int size = points.size();
        int e1 = points[0][1];
        for(int i=1;i<size;i++){
            int s2 = points[i][0];
            if(s2>e1){
                e1 = points[i][1];
                count++;
            }
        }
        return count;
    }
};