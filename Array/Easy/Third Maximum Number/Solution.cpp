class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long max=LONG_MIN,sec=LONG_MIN,th=LONG_MIN;
        for(int num:nums){
            if(num==max||num==sec||num==th)
                continue;
            if(num>max){
                th=sec;
                sec=max;
                max=num;
            }
            else if(num>sec){
                th=sec;
                sec=num;
            }
            else if(num>th)
                th=num;
        }
        return th==LONG_MIN?max:th;
    }
};