class Solution {
public:
    int climbStairs(int n) {
        if(n<=2) return n;
        vector<int> nums;
        nums.push_back(1);
        nums.push_back(2);
       for(int i=2;i<n;++i){
           nums.push_back(0);
           nums[i]=nums[i-1]+nums[i-2];
       }
        return nums[nums.size()-1];
    }
};