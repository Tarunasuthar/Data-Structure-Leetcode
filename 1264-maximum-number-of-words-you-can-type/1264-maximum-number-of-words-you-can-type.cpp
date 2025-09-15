class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        set<char> st;
        for(int j=0;j<brokenLetters.size();j++){
            st.insert(brokenLetters[j]);
        }
        stringstream ss(text);
        string word;
        int count = 0;
        while(getline(ss,word,' ')){
            if(!word.empty()){
                int i=0;
                int size = word.size();
                int f = 0;
                while(i<size){
                    if(st.count(word[i])){
                        f = 1;
                        break;
                    }
                    i++;
                }
                if(f==0) count++;
            }
        }
        return count;
    }
};