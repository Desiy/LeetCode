class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& M) {
        int m=M.size(),n=M[0].size();
        vector<vector<int>> res;
        if(M.empty()||m==0||n==0) return res;
        
        vector<int> dir_r={-1,0,1},dir_c={-1,0,1};
        
        for(int i=0;i<m;++i){
            vector<int> temp;
            for(int j=0;j<n;++j){
                int sum=0,cnt=0;             
                for(int t1=0;t1<dir_r.size();++t1){
                    for(int t2=0;t2<dir_c.size();++t2){
                        int i_next=i+dir_r[t1];
                        int j_next=j+dir_c[t2];
                        if(i_next<0||i_next>=m||j_next<0||j_next>=n)
                            continue;
                        sum+=M[i_next][j_next];
                        ++cnt;
                    }
                }
                temp.push_back(sum*1.0/cnt);
            }
            res.push_back(temp);
        }
            return res;
    }
};