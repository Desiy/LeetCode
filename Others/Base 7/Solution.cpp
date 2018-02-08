class Solution {
public:
    string convertToBase7(int num) {
        if(num==0) return "0";
        int ab=abs(num);
        string res;
        while(ab){
            res=to_string(ab%7)+res;
            ab/=7;
        }
        if(num<0)
            return "-"+res;
        return res;
    }
};