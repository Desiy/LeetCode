class Solution {
public:
    int hammingDistance(int x, int y) {
        int cnt=0;
        while(x>0||y>0){
            int i=x%2,j=y%2;
            if(i!=j) ++cnt;
            x/=2;
            y/=2;
        }
        return cnt;
    }
};