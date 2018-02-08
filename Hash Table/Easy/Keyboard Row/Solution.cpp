class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> res;
        int len=words.size();
        for(auto word:words){
            bool match1=word.find_first_of("QWERTYUIOPqwertyuiop")==string::npos?false:true;
            bool match2=word.find_first_of("ASDFGHJKLasdfghjkl")==string::npos?false:true;
            bool match3=word.find_first_of("ZXCVBNMzxcvbnm")==string::npos?false:true;
            if(match1+match2+match3==1)
                res.push_back(word);
        }
        return res;
    }
};