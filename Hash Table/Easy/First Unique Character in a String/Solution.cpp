class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> m;
        int res=-1,len=s.size();
        for(char ch:s)
            ++m[ch];
        for(int i=0;i<len;++i){
            if(m[s[i]]==1)
                return i;
        }
        return -1;      
    }
};