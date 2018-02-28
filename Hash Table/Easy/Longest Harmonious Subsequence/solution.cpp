class Solution {
public:
    int findLHS(vector<int>& nums) {
        map<int,int> mp;
        int len=nums.size(),cnt=0,lhs=0;
        for(int i=0;i<len;i++){
            mp[nums[i]]++;
        }
        if(mp.size()<=1) return 0;
        auto it=mp.begin(),it2=++mp.begin();
        while(it2!=mp.end()){
            if(it2->first-it->first==1)
                cnt=it->second+it2->second;
            if(cnt>lhs)
                lhs=cnt;
            ++it;++it2;
        }
        return lhs;
    }
};