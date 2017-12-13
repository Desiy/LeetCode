class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
           for(int row=0;row<numRows;++row){
               res.push_back(vector<int>(row+1,1));
               
               for(int column=1;column<row;++column){
                   res[row][column]=res[row-1][column]+res[row-1][column-1];
               }             
           }
            return res;
    }
};