class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.empty())
            return 0;
        int i = 0, j = 0,count=0;
        while(i<haystack.size()) {
            ++count;
            if (haystack[i++] != needle[j++]){
                j=0;
                i=i-count+1;
                count=0;
            }
            if (j == needle.size())
                return i-count;
        }
        return -1;
    }
};