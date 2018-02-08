class Solution {
public:
    int minMoves(vector<int>& nums) {
        if(nums.empty()) return 0;
        int mv=0,min=nums[0],sum=0,len=nums.size();
        for(int num:nums){
            sum+=num;
            if(num<min)
                min=num;
        }
        mv=sum-min*len;
        return mv;
    }
};