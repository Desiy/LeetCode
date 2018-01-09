class Solution {
public:
    void swap(int &num1,int &num2){
        int temp=num1;
        num1=num2;
        num2=temp;
    }
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> res;
        int len=nums.size();
        for(int i=0;i<len;++i){
            while(nums[i]!=nums[nums[i]-1])
                swap(nums[i],nums[nums[i]-1]);
        }
        for(int i=0;i<len;++i){
            if(nums[i]!=i+1)
                res.push_back(i+1);
        }
        return res;
    }
};