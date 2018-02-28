class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int len=nums.size(),sum=0;
        for(int i=0;i<k;++i)
            sum+=nums[i];
        int res=sum;
        int i=k;
        while(i<len){
            res=max(res,sum+nums[i]-nums[i-k]);
            sum=sum+nums[i]-nums[i-k];
            ++i;
        }
        
        return res*1.0/k;
    }
};