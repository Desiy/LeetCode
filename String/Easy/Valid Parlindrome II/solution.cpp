class Solution {
public:
    bool isValid(string& s,int l,int r,int delnum){
        return l>=r||(s[l]==s[r]?
            isValid(s,l+1,r-1,delnum):delnum>0&&(isValid(s,l+1,r,delnum-1)||isValid(s,l,r-1,delnum-1)));
    }
    bool validPalindrome(string s) {
       return isValid(s,0,s.size()-1,1);
    }
    
};