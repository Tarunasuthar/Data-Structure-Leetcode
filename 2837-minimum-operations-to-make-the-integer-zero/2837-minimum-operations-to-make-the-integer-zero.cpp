class Solution {
public:
    int makeTheIntegerZero(int num1, int num2) {
        int t = 1;
        while(t<60){
            long long val = num1-(1LL*t*num2);
            if(val<0) t++;
            int c = __builtin_popcountll(val);
            
            if(c<=t && t<=val) return t;
            t++;
        }
        return -1;
    }
};