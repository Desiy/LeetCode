class Solution {
public:
    int lengthOfLastWord(string s) {
        if(s.empty()) return 0;
        int result=0,length=s.size(),i=length-1;       
        while(i>=0 && s[i]==' ')
            --i;
        while(i>=0&&s[i]!=' '){
            --i;
            ++result;
        }
        return result;
    }
};