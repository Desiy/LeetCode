class Solution {
public:
    int longestPalindrome(string s) {
        int res=0;
        bool odd=false;
        unordered_map<char,int> m;
        for(char ch:s)
            ++m[ch];
        for(auto i=m.begin();i!=m.end();++i){
            if(i->second%2==0)
                res+=i->second;
            else{
                res+=(i->second-1);
                odd=true;
            }
        }
        return odd?++res:res;
    }
};