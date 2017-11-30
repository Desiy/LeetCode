class Solution {
public:
    string countAndSay(int n) {
        if(n<=0)
            return "";
        string str="1";
        while(--n){
           string curstr="";
           for(int i=0;i<str.size();++i){             
               int cnt=1;
               while(i+1<str.size()&&str[i]==str[i+1]){
                   ++cnt;
                   ++i;
               }
               curstr+=to_string(cnt)+str[i];           
           }
            str=curstr;
        }
        
        return str;
    }
};