class Solution {
public:
    string addBinary(string a, string b) {
        string c;
        int flag=0,len_a=a.size(),len_b=b.size();
        int i=len_a-1,j=len_b-1,k=0;
        while(i>=0||j>=0||flag){
            int curr=((i>=0?a[i--]-'0':0)+(j>=0?b[j--]-'0':0)+flag);
            c+=(curr%2+'0');
            flag=(curr>1)?1:0;
        }
        int len_c=c.size();
        for(int i=0;i<len_c/2;++i){
            char temp=c[i];
            c[i]=c[len_c-i-1];
            c[len_c-i-1]=temp;
        }
        if(flag==1)
            c='1'+c;
        return c;
            
    }
};