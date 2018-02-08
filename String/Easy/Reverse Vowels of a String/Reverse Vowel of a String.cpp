class Solution {
public:
    string reverseVowels(string s) {
        int len=s.size(),left=0,right=len-1;
        while(left<right){
            while(!isvowel(s[left])&&(left<right)) ++left;
            while(!isvowel(s[right])&&(left<right)) --right;
            swap(s[left++],s[right--]);
        }
        return s;
    }
    bool isvowel(char ch){
        return (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U');
    }
};