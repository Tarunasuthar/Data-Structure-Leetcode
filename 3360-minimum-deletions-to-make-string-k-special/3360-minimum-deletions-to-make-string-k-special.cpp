class Solution {
public:
    int minimumDeletions(string word, int k) {
        int size = word.size();
        map<char,int> mp;
        for(int i=0;i<size;i++){
            mp[word[i]]++;
        }
        vector<int> freq;
        for(auto m:mp){
            freq.push_back(m.second);
        }
        sort(freq.begin(),freq.end());
        int freq_size = freq.size();
        int ans = INT_MAX;
        for(int i=0;i<freq_size;i++){
            int tar = freq[i];
            int del = 0;
            for(int j=0;j<freq_size;j++){
                if(freq[j]<tar){
                    del = del + freq[j];
                }
                else if(freq[j]>tar + k){
                    del = del + freq[j]-tar-k;
                }
            }
           ans = min(del,ans);
        }
        return ans;
    }
};