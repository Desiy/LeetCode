class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        
        int res=1,cnt=1,len=nums.size();
        if(len==0) return 0;
        for(int i=0;i<len-1;++i){
            if(nums[i]<nums[i+1])
                ++cnt;  
            else
                cnt=1;
            if(cnt>res)
                    res=cnt;
        }
        return res;
    }
};