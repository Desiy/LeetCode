class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        int len1=nums1.size(),len2=nums2.size();
        map<int,int> m;
        for(int i=0;i<len1;++i)
            m[nums1[i]]+=1;
        for(int i=0;i<len2;++i){
            if(m[nums2[i]]>0){
                res.push_back(nums2[i]);
                m[nums2[i]]=0;
            }
        }
        return res;
    }
};