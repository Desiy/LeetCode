class Solution {
public:
    bool judgeCircle(string moves) {
        int len=moves.size();
        int l=0,r=0,u=0,d=0;
        for(int i=0;i<len;i++){
            if(moves[i]=='L')
                ++l;
            else if(moves[i]=='R')
                ++r;
            else if(moves[i]=='U')
                ++u;
            else ++d;
        }
        if(l==r&&u==d)
            return true;
        return false;
    }
};