class Solution {
public:
    string addStrings(string num1, string num2) {
        string res="";
        int len1=num1.size()-1,len2=num2.size()-1,sum,carry=0;
        while(len1>=0||len2>=0||carry>0){
            sum=0;
            if(len1>=0) sum+=(int)num1[len1--]-'0';
            if(len2>=0) sum+=(int)num2[len2--]-'0';
            sum+=carry;
            carry=sum/10;
            res=to_string(sum%10)+res;
        }
        return res;
    }
};