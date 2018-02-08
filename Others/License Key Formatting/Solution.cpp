class Solution {
public:
    string licenseKeyFormatting(string S, int K) {
        string res,conv;
        int len=S.size(),i=0,j=0;
        while(i<len){
            if(S[i]!='-'){
                if(S[i]<='z'&&S[i]>='a')
                    conv+=S[i]-32;
                else
                    conv+=S[i];
            }
            ++i;
        }
        int leng=conv.size();
        i=0;
        while(leng>0){ 
                res+=conv[i++];
                --leng;
                if(leng%K==0&&leng!=0) res+='-';
            }
        return res;
    }
};