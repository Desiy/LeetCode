class Solution {
public:
    bool judgeSquareSum(int c) {
        for(int a=0,b=sqrt(c);a<=sqrt(c);){
            int sum=a*a+b*b;
            if(sum==c) return true;
            else if(sum<c) a++;
            else b--;
        }
        return false;
    }
};