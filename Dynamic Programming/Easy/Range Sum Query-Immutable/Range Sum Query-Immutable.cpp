class NumArray {
public:
    vector<int> s;
    NumArray(vector<int> nums) {
        int sum=0;
        for(auto num:nums){
            sum+=num;
            s.push_back(sum);
        }
    }
    
    int sumRange(int i, int j) {
        if(i==0) return s[j];
        else return s[j]-s[i-1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray obj = new NumArray(nums);
 * int param_1 = obj.sumRange(i,j);
 */