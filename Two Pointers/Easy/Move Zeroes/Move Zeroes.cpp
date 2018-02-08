class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int len=nums.size(),i=0,j=i+1;
        while(j<len){
            if(nums[i]==0&&nums[j]!=0){
                swap(nums[i],nums[j]);
                ++i;
            }
            else if(nums[i]!=0)
                ++i;
            ++j;
        }
    }
};