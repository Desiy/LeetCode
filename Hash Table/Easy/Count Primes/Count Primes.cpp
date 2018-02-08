class Solution {
public:
    int countPrimes(int n) {
        vector<bool> nums(n-1,true);
        nums[0]=false;
        int res=0,limits=sqrt(n);
        for(int i=2;i<=limits;++i){
            if(nums[i-1]){
                for(int j=i*i;j<n;j+=i)
                    nums[j-1]=false;
            }
        }
        for(int index=0;index<n-1;++index){
            if(nums[index])
                ++res;
        }
        return res;
    }
};