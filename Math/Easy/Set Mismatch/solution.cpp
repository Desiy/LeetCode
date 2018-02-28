class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        
        vector<int> res;
        int len=nums.size(),t=nums[len-1]^len,dup=nums[len-1];
        map<int,int> mp;       
        for(int i=0;i<len-1;i++){
            if(++mp[nums[i]]==2)
                dup=nums[i];
            t^=nums[i]^(i+1);
        }     
        t^=dup;
        res.push_back(dup);
        res.push_back(t);
        return res;
        
    }
};