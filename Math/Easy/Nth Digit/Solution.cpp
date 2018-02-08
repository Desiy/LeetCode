class Solution {
public:
    int findNthDigit(int n) {
        long len=1,cnt=9,start=1;
        while(n>len*cnt){
            n-=len*cnt;
            len+=1;
            cnt*=10;
            start*=10;
        }
        start+=(n-1)/len;
        string st=to_string(start);
        return st[(n-1)%len]-'0';
    }
};