class Solution {
public:
    int rob(vector<int>& nums) {
        int res_a=0,res_b=0;
        for(int i=0;i<nums.size();++i){
            if(i%2==0)
                res_a=max(res_a+nums[i],res_b);
            else
                res_b=max(res_b+nums[i],res_a);
        }
        return max(res_a,res_b);
    }
};