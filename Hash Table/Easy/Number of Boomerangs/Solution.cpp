class Solution {
public:
    int numberOfBoomerangs(vector<pair<int, int>>& points) {
        int res=0,len=points.size();
        for(int i=0;i<len;++i){
            unordered_map<long,int> mp(len);
            for(int j=0;j<len;++j){
                if(i==j) continue;
                int dis=pow(points[i].first-points[j].first,2)+pow(points[i].second-points[j].second,2);
                ++mp[dis];
            }
            for(auto ele:mp){
                if(ele.second>1)
                    res+=ele.second*(ele.second-1);
            }
        }
        return res;
    }
};