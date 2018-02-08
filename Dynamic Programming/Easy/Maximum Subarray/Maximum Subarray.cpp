class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.empty())
            return 0;
        if(nums.size()==1)
            return nums[0];
        int sum=nums[0],maxsum=nums[0],i=0;       
        while(i<nums.size()&&nums[i]<=0){           
            if(nums[i]>maxsum)
                maxsum=nums[i];
            ++i;
        }
        if(i==nums.size())
            return maxsum;
        maxsum=nums[i],sum=nums[i];
        for(int j=i+1;j<nums.size();++j){
            if(sum<=0)
                sum=nums[j];
            else 
                sum+=nums[j];
            if(sum>maxsum)
                maxsum=sum;
        }            
        return maxsum;
    }
};\