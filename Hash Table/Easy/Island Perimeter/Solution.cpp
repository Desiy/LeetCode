class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        if(grid.empty()) return 0;
        int res=0;
        int len1=grid.size(),len2=grid[0].size();
        for(int i=0;i<len1;++i){
            for(int j=0;j<len2;++j){
                if(grid[i][j]==1){
                    if(j==0||grid[i][j-1]==0) ++res;
                    if(i==0||grid[i-1][j]==0) ++res;
                    if(j==len2-1||grid[i][j+1]==0) ++res;
                    if(i==len1-1||grid[i+1][j]==0) ++res;
                }
            }
        }
        return res;
    }
};