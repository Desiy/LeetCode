class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        if(s.empty()||g.empty()) return 0;
        int cnt=0,len_g=g.size(),len_s=s.size();
        sort(g.begin(),g.end());  
        sort(s.begin(),s.end());
        
        int i=0,j=0;
        while(i<len_g&&j<len_s){
            if(s[j]>=g[i]){
                ++cnt;
                ++j;
                ++i;
            }
            else
                ++j;
                
        }
            
        return cnt;
    }
};