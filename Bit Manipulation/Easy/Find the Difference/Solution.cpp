class Solution {
public:
    char findTheDifference_map(string s, string t) {
        map<char,int> m;
        int len=s.size();
        for(int i=0;i<len;++i){
            ++m[s[i]];
            --m[t[i]];
        }
        --m[t[t.size()-1]];
        for(char ch='a';ch<='z';++ch){
            if(m[ch]!=0)
                return ch;
        }
          return 'a';
    }
    char findTheDifference_sum(string s, string t) {
        int sum_s=0,sum_t=0;
        int len=s.size();
        for(int i=0;i<len;++i){
            sum_s+=s[i]-'a';
            sum_t+=t[i]-'a';
        }
        sum_t+=t[t.size()-1];
        int diff=sum_t-sum_s-'a';
        return 'a'+diff;
    }
     char findTheDifference_XOR(string s, string t) {
        char res=0;
        int len=s.size();
        for(int i=0;i<len;++i){
            res^=s[i];
            res^=t[i];
        }
        res^=t[len];
        return res;
    }
};