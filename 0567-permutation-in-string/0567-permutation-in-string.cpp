class Solution {
public:
    bool check(string n1,map<char,int> mp){
        map<char,int> mp1;
        for(int i=0;i<n1.size();i++){
            mp1[n1[i]]++;
        }
        if(mp1==mp) return true;
        return false;
    }
    bool checkInclusion(string s1, string s2) {
        int size1 = s1.size();
        int size2 = s2.size();

        if(size1>size2) return false;
        map<char,int> mp;
        for(int i=0;i<s1.size();i++){
            mp[s1[i]]++;
        }
        for(int i=0;i<=size2-size1;i++){
            string m;
            for(int j=i;j<size1+i;j++){
                m += s2[j];
            }
            if(check(m,mp)) return true;
        }
        return false;
    }
};