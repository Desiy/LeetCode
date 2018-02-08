class Solution {
public:
    bool isPowerOfThree(int n) {
        int maxthreepower=1162261467;
        if(n<=0||n>maxthreepower) return false;
        return maxthreepower%n==0;
    }
};