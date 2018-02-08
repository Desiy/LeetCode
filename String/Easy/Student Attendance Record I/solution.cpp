class Solution {
public:
    bool checkRecord(string s) {
        int absence=0,lateness=0,len=s.size();
        for(int i=0;i<len;++i){
            if(s[i]=='A'){
                absence+=1;
                if(absence>1)
                    return false;
            }
            if(s[i]=='L'&&s[i+1]=='L'&&s[i+2]=='L')
                return false;
        }
        return true;
    }
};