
 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };

class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int len=nums.size();
        if(!len) return NULL;
        if(len==1) return new TreeNode(nums[0]);
        int mid=len/2;
        TreeNode* root=new TreeNode(nums[mid]);
        vector<int> left(nums.begin(),nums.begin()+mid);
        vector<int> right(nums.begin()+mid+1,nums.end());
        root->left=sortedArrayToBST(left);
        root->right=sortedArrayToBST(right);
        return root;
    }
};