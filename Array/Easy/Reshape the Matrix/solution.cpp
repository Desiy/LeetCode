vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        int nr=nums.size(),nc=nums[0].size();
        if(nr*nc!=r*c)
            return nums;
        vector<vector<int>> res;
        
        for(int i=0;i<r;++i){
            vector<int> temp;
            for(int j=0;j<c;++j){
                temp.push_back(0);
            }
            res.push_back(temp);
        }
        
        for(int i=0;i<r*c;++i){
           res[i/r][i%r]=nums[i/nc][i%nc];
        }
        return res;
    }
