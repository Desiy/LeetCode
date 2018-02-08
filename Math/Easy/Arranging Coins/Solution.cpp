class Solution {
public:
    int arrangeCoins(int n) {
        if(n<=1) return n;
        return (int)((-1+sqrt(1+(long)n*8))/2);
    }
};