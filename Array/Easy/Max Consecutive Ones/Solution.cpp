class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt=0,cons=0,i=0,len=nums.size();
        while(i<len){
            while(i<len&&nums[i]==1){
                cnt+=1;
                ++i;
            }
            if(cnt>cons) cons=cnt;
            cnt=0;
            ++i;
        }
        return cons;
    }
};