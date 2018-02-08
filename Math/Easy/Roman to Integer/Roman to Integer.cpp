class Solution {
int romanto(char ch){
        switch(ch){
            case 'I':return 1;break;
            case 'V':return 5;break;
            case 'X':return 10;break;
            case'L':return 50;break;
            case 'C':return 100;break;
            case 'D':return 500;break;
            case 'M':return 1000;             
        }
        return 0;
        
    }
public:
    int romanToInt(string s) {   
        int r=0;
        for(int i=0;i<s.size();++i){
            if(i==s.size()-1||romanto(s[i])>=romanto(s[i+1]))
                r+=romanto(s[i]);
            else r-=romanto(s[i]);
        }
        return r;
    }
   
};
 