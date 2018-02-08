class Solution {
public:
    bool wordPattern(string pattern, string str) {
        map<char,int> pat;
        map<string,int> st;
        istringstream in(str);
        int i=0,len=pattern.size();
        for(string word;in>>word;++i){
            if(i==len||pat[pattern[i]]!=st[word])
                return false;
            pat[pattern[i]]=st[word]=i+1;
        }
        return i==len;
    }
};