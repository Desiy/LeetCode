class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int len=nums.size();
        unordered_map<int,int> m;
        for(int i=0;i<len;++i){
            m[nums[i]]+=1;
            if(m[nums[i]]>1)
                return true;
        }
        return false;
    }
};