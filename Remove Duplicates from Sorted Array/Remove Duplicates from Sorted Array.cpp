class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty()) return 0;
        int i=0,j=0,length=nums.size();
        while(j<length){
            if(nums[i]==nums[j])
                ++j;
            else nums[++i]=nums[j++];
        }
           return i+1;
    }
};