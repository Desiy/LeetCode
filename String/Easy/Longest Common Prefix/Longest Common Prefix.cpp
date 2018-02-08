class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()||strs.size()==0)
            return "";
        if(strs.size()==1)
            return strs[0];
        string comprefix="";
  
        for(int i=0;i<strs[0].size();++i){
            int count=0;
            for(int j=0;j<strs.size()-1;++j){
                if(strs[j][i]==strs[j+1][i]){
                    ++count;
                }
                else break;
            }
            if(count==strs.size()-1)
                comprefix+=strs[count][i];
            else 
                break;
            
        }
       return comprefix;
    }
};