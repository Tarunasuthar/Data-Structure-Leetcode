class Solution {
public:
    int countHousePlacements(int n) {
        if(n==1) return 4;
        if(n==2) return 9;
        int f = 3;
        int first = 2;
        int second = 3;
        int ar;
        int MOD = 1e9+7;
        while(f<=n){
           ar = (first+second)%MOD;
           first = (second)%MOD;
           second = (ar)%MOD;
           f++;
        }
        return (1LL*ar*ar)%MOD;
    }
};