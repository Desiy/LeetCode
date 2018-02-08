class Solution {
public:
    bool repeatedSubstringPattern(string s) {
       string newstring=s+s;
        int len=s.size();
        newstring=newstring.substr(1,2*len-2);
        return newstring.find(s)!=-1;
    }
};