class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        if(k<0) return 0;
        int res=0;
        map<int,int> mp;
        for(auto num:nums)
            mp[num]+=1;
        if(k!=0){
            for(auto it=mp.begin();it!=mp.end();++it){
                if(mp.find(it->first+k)!=mp.end())
                    ++res;
            }
        }
        else{
            for(auto it=mp.begin();it!=mp.end();++it){
                if(it->second>1)
                    ++res;
            }
        }
        return res;
    }
};