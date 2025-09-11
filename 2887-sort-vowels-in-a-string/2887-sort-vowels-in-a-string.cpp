class Solution {
public:
    string sortVowels(string s) {
        int size = s.size();
        string vow;
        vector<int> vec;
        for(int i=0;i<size;i++){
            if(s[i]=='A' || s[i]=='E'|| s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                vow += s[i];
                vec.push_back(i);
            }
        }
        sort(vow.begin(),vow.end());
        for(int i=0;i<vec.size();i++){
            s[vec[i]] = vow[i];
        }
        return s;
    }
};