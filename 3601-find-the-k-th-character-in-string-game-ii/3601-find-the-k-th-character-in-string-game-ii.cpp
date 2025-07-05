class Solution {
public:
    char kthCharacter(long long k, vector<int>& operations) {
        long long val = k;
        int count_op = 0;
        while(val>1){
        int jump = ceil(log2(val));
        val -= pow(2,jump-1);
        count_op += operations[jump-1];
        }
        return char('a'+ (count_op%26));
    }
};