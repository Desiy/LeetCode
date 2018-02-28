class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        if(candies.empty()) return 0;
        int len=candies.size(),cnt=0;
        map<int,int> mp;
        for(int i=0;i<len;i++){
            mp[candies[i]]++;
        }
        for(auto it=mp.begin();it!=mp.end();++it){
            if(it->second>=1&&cnt<len/2){
                cnt++;
                it->second-=1;
            }
        }
        return cnt;
        
    }
};