class Solution {
public:
    bool checkPerfectNumber(int num) {
        if(num==1) return false;
        int sum=1,bound=num;
        for(int div=2;div<bound;++div){
            if(num%div==0){
                sum+=div+num/div;
                bound=num/div;
            }
        }
        return sum==num;
    }
};