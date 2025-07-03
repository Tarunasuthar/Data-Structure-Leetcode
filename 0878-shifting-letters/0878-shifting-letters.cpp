class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        int size = shifts.size();
        vector<long long> amount(size);
        long long sum = 0;
        for(int i=size-1;i>=0;i--){
            sum += shifts[i];
            amount[i] = sum;
        }
        string t;
        for(int i=0;i<size;i++){
            int no = amount[i]%26;
            char c = s[i];
            int n=1;
            while(n<=no){
                if(c=='z'){
                    c = 'a';
                }
                else{
                    c = c + 1;
                }
                n++;
            }
          t += c;
        }
        return t;
    }
};