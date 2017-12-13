class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int res=nums[0],count=1,i=1;
        while(i<nums.size()){
            if(count==0)
                res=nums[i];
            if(nums[i++]==res)
                ++count;
            else --count;
            
        }
        return res;
    }
};