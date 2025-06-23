class Solution {
public:
    bool check_prime(long long p){

        if(p<=1)
        return false;
        for(long long i=2;i*i<=p;i++){
           if(p%i==0)
           return false;
        }
        return true;
    }
    int primePalindrome(int n) {

        if (n <= 2) return 2;
        if (n <= 3) return 3;
        if (n <= 5) return 5;
        if (n <= 7) return 7;
        if (n <= 11) return 11;

        int high = (long long)2*pow(10,8);
        int length = to_string(n).size();
        int len = length;
        while(len<10){
            int half = (len+1)/2;
            long long mini,maxi;
            if(len==length){
                 mini = stoll(to_string(n).substr(0,half));
                 maxi = (long long)pow(10,half)-1;
            }
            else{
                 mini = (long long)pow(10,half-1);
                 maxi = (long long)pow(10,half)-1;
            }
            
            for(long long i=mini;i<maxi+1;i++){
                string left = to_string(i);
                string right = left;
                if(len%2==1){
                    right.pop_back();
                }
                reverse(right.begin(),right.end());
                string s = left + right;
                long long c = stoll(s);
                if(c>=n && check_prime(c)){
                   return c;
                }
            }
            len++;
        }
        return -1;
    }
};