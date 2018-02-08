class Solution {
public:
    bool detectCapitalUse(string word) {
        int len=word.size();
        for(int i=1;i<len;++i){
            if(isupper(word[i])&&islower(word[i-1]))
                return false;
            else if(islower(word[i])&&isupper(word[i-1])&&i!=1)
                return false;
        }
        return true;    
    }
};