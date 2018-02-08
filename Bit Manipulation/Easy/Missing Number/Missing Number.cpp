class Solution {
public:
    int missingNumber(vector<int>& nums)_addnumber {
        int len=nums.size();
        int max=nums[0],sum_vec=0,sum=0;
        for(int i=0;i<len;++i){
            if(nums[i]>max)
                max=nums[i];
            sum_vec+=nums[i];
        }
        for(int i=0;i<=len;++i)
            sum+=i;
        return sum-sum_vec;
    }
    int missingNumber(vector<int>& nums)_manipulation{
        int res=nums.size();
        int i=0;
        for(auto num:nums){
            res^=num;
            res^=i;
            ++i;
        }
        return res;
    }
};