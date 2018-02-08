class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> res,sv(26,0),pv(26,0);
        int len_s=s.size(),len_p=p.size();
        for(int i=0;i<len_p;++i)
            ++sv[p[i]-'a'];
        for(int j=0;j<len_s;++j){
            ++pv[s[j]-'a'];
            if(j>=len_p)
                --pv[s[j-len_p]-'a'];
            if(pv==sv) res.push_back(j-len_p+1);
        }   
        return res;
    }
};