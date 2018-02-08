class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        int len=nums.size();
        int diff=0;
        for(int i=0;i<len;++i){
            if(m.find(nums[i])==m.end())
                m[nums[i]]=i;
            else
            {
                int pre=m[nums[i]];
                m[nums[i]]=i;
                diff=abs(pre-i);
                if(diff<=k)
                    return true;
            }            
        }
        return false;
    }
};