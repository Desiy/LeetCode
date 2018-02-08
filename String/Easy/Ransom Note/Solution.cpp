class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int> m;
        for(auto ch:magazine)
            ++m[ch];
        for(auto c:ransomNote){
            if(m[c]>0)
                --m[c];
            else 
                return false;
        }
        return true;
    }
};