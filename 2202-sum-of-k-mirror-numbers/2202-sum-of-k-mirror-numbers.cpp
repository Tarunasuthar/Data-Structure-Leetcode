class Solution {
public:
    // Check if number is palindrome in base-k
    bool isKPalindrome(long long num, int k) {
        vector<int> digits;
        while (num > 0) {
            digits.push_back(num % k);
            num /= k;
        }
        int i = 0, j = digits.size() - 1;
        while (i < j) {
            if (digits[i++] != digits[j--])
                return false;
        }
        return true;
    }

    // Generate palindromic strings in base-10
    long long kMirror(int k, int n) {
        int count = 0;
        long long sum = 0;
        int length = 1;

        while (count < n) {
            int half = (length + 1) / 2;
            long long mini = pow(10,half-1);
            long long maxi = pow(10,half)-1;
            for (int i = mini; i <= maxi; ++i) {
                string left = to_string(i);
                string right = left;
                if (length % 2 == 1)
                {
                 right.pop_back();
                }
                reverse(right.begin(), right.end());
                string palin = left + right;
                long long num = stoll(palin);

                if (isKPalindrome(num, k)) {
                    sum += num;
                    count++;
                }
                if(count==n)
                return sum;
            }
            length++;
        }

        return sum;
    }
};



   
