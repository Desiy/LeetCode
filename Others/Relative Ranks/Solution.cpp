class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& nums) {       
        map<int,int> mp;
        int len=nums.size();
        vector<string> res(len,"");
        for(int i=0;i<len;++i)
            mp[nums[i]]=i;
        int cnt=1;
        for(auto it=mp.rbegin();it!=mp.rend();++it){
            if(cnt==1) res[it->second]="Gold Medal";
            else if(cnt==2) res[it->second]="Silver Medal";
            else if(cnt==3) res[it->second]="Bronze Medal";
            else res[it->second]=to_string(cnt);
            ++cnt;
        }
        return res;
    }
};