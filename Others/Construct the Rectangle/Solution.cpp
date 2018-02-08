class Solution {
public:
    vector<int> constructRectangle(int area) {
        vector<int> res;
        for(int w=sqrt(area);w>=1;--w){
            if(area%w==0){
                int l=area/w;
                res.push_back(l);
                res.push_back(w);
                return res;
            }
        }
        return res;
    }
};