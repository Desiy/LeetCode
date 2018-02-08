class Solution {
public:
    int findComplement(int num) {
        unsigned n=~0;
        while(n&num){
            n<<=1;
        }
        return ~n&~num;
    }
};