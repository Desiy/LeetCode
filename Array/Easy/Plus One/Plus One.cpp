class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int length=digits.size(),i=length-1;
        digits[i]+=1;
        while(digits[i]==10&&i>0){
            digits[i]=0;
            digits[i-1]+=1;
            --i;
        }
        if(digits[0]==10){
            digits.push_back(1);
            digits[0]=1;
            digits[length]=0;
        }
        
        return digits;
    }
};