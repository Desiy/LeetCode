#include <limits>
class Solution {
public:
    int reverse(int x) {
       long long r=0;		
	   
		while (x!=0) {
			r = r * 10 + x % 10;
            x /= 10;
			}
        return (r>INT_MAX||r<INT_MIN?0:r);
    }
};