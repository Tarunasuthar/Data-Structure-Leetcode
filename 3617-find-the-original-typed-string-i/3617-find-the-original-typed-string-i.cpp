class Solution {
public:
    int possibleStringCount(string word) {
        int size = word.size();
        int count = 1;
        string prev;
        for(int i=0;i<size;i++){
            if(prev==to_string(word[i])){
                count++;
            }
            else{
                prev = to_string(word[i]);
            }
        }
        
        return count;
    }
};