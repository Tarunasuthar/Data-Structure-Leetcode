class Solution {
public:
    bool no(int m){
        while(m>0){
            if(m%10==0) return false;
            m = m/10;
        }
        return true;
    }
    vector<int> getNoZeroIntegers(int n) {
        for(int i=1;i<n;i++){
            int a = n-i;
        if(no(a) && no(i)){
            return {a,i};
        }
        }
        return {};
    }
};