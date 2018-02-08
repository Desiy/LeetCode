class Solution {
public:
    string toHex(int num) {
        string lib="0123456789abcdef",res="";
        int cnt=0;
        while(num!=0&&cnt++<8){
            res=lib[num & 0xf]+res;
            num>>=4;
        }
        return res.empty()?"0":res;
    }
};