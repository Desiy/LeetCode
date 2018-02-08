class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
        vector<int> res;
        int len_f=findNums.size(),len_n=nums.size();
        for(int i=0;i<len_f;i++){
            int gn=-1;
            auto pos=find(nums.begin(),nums.end(),findNums[i]);
            while(pos!=nums.end()){
                if(*pos>findNums[i]){
                    gn=1;
                    res.push_back(*pos);
                    break;
                }
                ++pos;
            }        
            if(gn==-1) res.push_back(-1);
        }
        return res;
    }
};