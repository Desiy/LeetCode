class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        vector<int> vec;
        for(int i=0;i<32;++i){
            vec.push_back(n%2);
            n/=2;
        }
        uint32_t res=0,len=vec.size();
        for(int i=len-1;i>=0;--i)
            res+=vec[i]*pow(2,len-i-1);
        return res;
    }
};