class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int len=prices.size(),i=0,minprice=INT_MAX,maxprof=0;
        while(i<len){
            if(prices[i]<minprice) minprice=prices[i];
            if(prices[i]-minprice>maxprof) maxprof=prices[i]-minprice;
            ++i;
        }
        return maxprof;
      
    }
};