class Solution {
public:
    string reverseWords(string s) {
        int len = s.size(), i = 0, j = 0;
            auto it = s.begin();
            while (it != s.end()) {
                while (*it == ' ')
                    it++;

                while (it!=s.end()&&*it != ' ') {
                    it++;
                    j++;
                }
                
                reverse(it - j, it );
                j = 0;
            }

            return s;
    }
};