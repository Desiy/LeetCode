class Solution {
public:
    vector<int> getRow(int rowIndex) {
         vector<vector<int>> res;
           for(int row=0;row<rowIndex+1;++row){
               res.push_back(vector<int>(row+1,1));              
               for(int column=1;column<row;++column){
                   res[row][column]=res[row-1][column]+res[row-1][column-1];
               }             
           }
        return res[rowIndex];
    }
};