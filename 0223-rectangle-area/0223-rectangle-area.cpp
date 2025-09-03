class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int nx1=0,nx2=0,ny1=0,ny2=0;
        
        nx1 = max(ax1,bx1);
        nx2 = min(ax2,bx2);
        ny1 = max(ay1,by1);
        ny2 = min(ay2,by2);
        
        int area = 0;
        if(nx1<nx2 && ny1<ny2){
            area = (nx2-nx1)*(ny2-ny1);
        }
        area = (ax2-ax1)*(ay2-ay1) + (bx2-bx1)*(by2-by1) - area;
        return area;
    }
};