class Solution {
public:
    bool isValid(string word) {
       int size = word.size();
       if(size<3) return false;
       bool vowel = false;
       bool consonant = false;
       for(int i=0;i<size;i++){
          if(!((word[i]>='A' && word[i]<='Z') || (word[i]>='a' && word[i]<='z') || (word[i]>='0' && word[i]<='9'))){
             return false;
          }
          if(word[i]=='a'||word[i]=='e'||word[i]=='i'||word[i]=='o'||word[i]=='u'||word[i]=='A'||word[i]=='E'||word[i]=='I'||word[i]=='O'||word[i]=='U'){
            vowel = true;
          }
          if(word[i]!='a' && word[i]!='e' && word[i]!='i' && word[i]!='o' && word[i]!='u'&& word[i]!='A' && word[i]!='E' && word[i]!='I' && word[i]!='O' && word[i]!='U' && ((word[i] >= 'A' && word[i] <= 'Z') || (word[i] >= 'a' && word[i] <= 'z'))){
            consonant = true;
          }
       }
       if(vowel && consonant){
        return true;
       }
       return false;
    }
};