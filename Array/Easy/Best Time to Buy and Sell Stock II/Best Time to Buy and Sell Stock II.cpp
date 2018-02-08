class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int len=prices.size();
        //if(len<=1) return 0;
        int prices_buy=INT_MAX,prof=0,i=1;
        while(i<len){
           if(prices[i]>prices[i-1])
               prof+=prices[i]-prices[i-1];
            ++i;
        }
        return prof;
    }
};