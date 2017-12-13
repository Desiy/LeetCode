class Solution {
public:
    void rotate_1(vector<int>& nums, int k) {
        int len=nums.size(),start=0;
        vector<int>temp;
        for(int i=0;i<len;++i)
           temp.push_back(nums[i]);
        start=k%len;
        for(int i=0;i<len;++i){
            if(start+i>len-1)
                nums[start+i-len]=temp[i];
            else
                nums[start+i]=temp[i];
        }
           
    }
     void rotate_2(vector<int>& nums, int k) {
       if(nums.empty()||(k%=nums.size())==0) return ;
       int len=nums.size();
       reverse(nums.begin(),nums.begin()+len-k);
       reverse(nums.begin()+len-k,nums.end());
       reverse(nums.begin(),nums.end());
   }
       void swap(int& a,int& b){
        int temp=a;
        a=b;
        b=temp;
    }
   void rotate(int nums[],int len, int k) {
       for(;k%=len;nums+=k,len-=k){
           for(int i=0;i<k;++i)
               swap(nums[i],nums[len-k+i]);
       }
   }

};