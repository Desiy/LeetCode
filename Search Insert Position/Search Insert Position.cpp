class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int length=nums.size();
        
        if(target>nums[length-1])
            return length;
        else if(target<=nums[0])
            return 0;
        int i=1;
        while(i<nums.size()){
            if(nums[i]==target)
                return i;
            else if(nums[i]>target&&nums[i-1]<target)
                return i;
            else ++i;                
        }
        return 0;
    }
};