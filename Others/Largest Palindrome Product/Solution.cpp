class Solution {
public:
    long buildPalindrome(int num) {
	string n = to_string(num), s = n;
	reverse(n.begin(), n.end());
	return stol(s + n);
}
int largestPalindrome(int n) {
	if (n == 1) return 9;
	int max = pow(10, n) - 1, min = pow(10, n - 1);
	for (int i = max; i >= min; --i) {
		long cand = buildPalindrome(i);
		for (long j = max; j*j >= cand; --j) {
			if (cand%j == 0) {
				return cand % 1337;
			}
		}
	}
	return 0;
}
};