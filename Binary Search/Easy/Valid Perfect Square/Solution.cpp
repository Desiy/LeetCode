class Solution {
public:
    bool isPerfectSquare(int num) {
       int left=1,right=num;
        while(left<=right){
            long mid=left+(right-left)/2;
            long power=mid*mid;
            if(power==num)
                return true;
            else if(power>num)
                right=mid-1;
            else left=mid+1;
        }
        return false;
    }
};