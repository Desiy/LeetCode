class Solution {
public:
    int countSegments(string s) {
        int res=0,len=s.size(),index=1;
        s.push_back(' ');
        while(index<=len){
            if(s[index]==' '&&s[index-1]!=' ')
                ++res;
            ++index;
        }
        return res;
    }
};