class Solution {
public:
    int compress(vector<char>& chars) {
        int ptr=0,i=0,len=chars.size();
        while(i<len){
            int cnt=1;
            char ch=chars[i++];
            while(i<len&&chars[i]==ch){
                ++i;
                ++cnt;
            }
            chars[ptr++]=ch;
            if(cnt>1){           
                string st=to_string(cnt);
                for(char c:st)
                    chars[ptr++]=c;
            }
                
            
        }
        return ptr;
    }
};