class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        vector<string> res;
        map<string,int> m;
        int len1=list1.size(),len2=list2.size(),i=0,j=0;
        while(i<len1){
            m[list1[i]]=i;
            ++i;
        }
        int sum=INT_MAX;
        while(j<len2){
            if(m.find(list2[j])!=m.end()){
                if(m[list2[j]]+j<sum){
                    sum=m[list2[j]]+j;
                    
                    res.clear();
                    res.push_back(list2[j]);
                }
                else if(m[list2[j]]+j==sum)
                    res.push_back(list2[j]);
            }
            j++;
        }
        return res;
    }
};