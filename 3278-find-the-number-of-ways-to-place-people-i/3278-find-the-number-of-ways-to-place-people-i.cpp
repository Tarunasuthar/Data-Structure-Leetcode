class Solution {
public:
    int numberOfPairs(vector<vector<int>>& points) {
        sort(points.begin(),points.end(),[](const vector<int>&a,const vector<int>&b){
            if(a[0]==b[0]) return a[1]<b[1];
            return a[0]>b[0];
        });
        int count = 0;
        int size = points.size();
        for(int i = 0;i<size;i++){
            for(int j=i+1;j<size;j++){
                int upper_y = points[j][1];
                int lower_y = points[i][1];

                if(points[j][1]>=points[i][1]){
                    int k=i+1;
                    int flag = 0;
                    while(k<j){
                        if((points[k][1]>=lower_y && points[k][1]<=upper_y)){
                            flag = 1;
                            break;
                        }
                        k++;
                    }
                    if(flag==0){
                        count++;
                    }
                }
            }
        }
        return count;
    }
};