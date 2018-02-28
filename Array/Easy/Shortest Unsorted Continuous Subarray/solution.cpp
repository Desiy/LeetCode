class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int len=nums.size(),i=1,start=-1,end=-2;
        int maxnum=nums[0],minnum=nums[len-1];
        while(i<len){
            maxnum=max(maxnum,nums[i]);
            if(nums[i]<maxnum) end=i;
            minnum=min(minnum,nums[len-1-i]);
            if(nums[len-1-i]>minnum) start=len-1-i;
            ++i;
        }
        return end-start+1;
    }
};