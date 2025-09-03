class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        int nx1 = max(rec1[0],rec2[0]);
        int nx2 = min(rec1[2],rec2[2]);
        int ny1 = max(rec1[1],rec2[1]);
        int ny2 = min(rec1[3],rec2[3]);

        if(nx1<nx2 && ny1<ny2){
            return true;
        }
        return false;
    }
};