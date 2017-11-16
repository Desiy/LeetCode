#include <vector>
#include <map>
using std::vector;
using std::map;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       map<int, int> m;
		vector<int> result;
		for (int i = 0; i < nums.size(); ++i) {
			m[nums[i]] = i;
		}
		for (int i = 0; i < nums.size(); ++i) {
			int diff = target - nums[i];
			if (m.count(diff) && m[diff] != i) {
				result.push_back(i);
				result.push_back(m[diff]);
                break;
			}
		}
		return result;
	}
};