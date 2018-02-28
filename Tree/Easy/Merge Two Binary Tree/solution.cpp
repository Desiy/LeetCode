/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
    
public:
    
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        if (!t1) return t2;
        if (!t2) return t1;
        stack<TreeNode*> s1, s2;
        s1.push(t1);
        s2.push(t2);
        TreeNode* res = t1;
        while (!s1.empty()) {
            TreeNode* n1 = s1.top();
            TreeNode* n2 = s2.top();
            s1.pop();
            s2.pop();
            n1->val += n2->val;
            if (n1->left != NULL&&n2->left != NULL) {
                s1.push(n1->left);
                s2.push(n2->left);
            }
            else if (n1->left == NULL) {
                n1->left = n2->left;
            }
            if (n1->right != NULL&&n2->right != NULL) {
                s1.push(n1->right);
                s2.push(n2->right);
            }
            else if (n1->right == NULL) {
                n1->right = n2->right;
            }
        }
        return res;
    }
    void merge(TreeNode* t1, TreeNode* t2) {
        t1->val += t2->val;
        if (t1->left&&t2->left) {
            merge(t1->left, t2->left);
        }
        else if (t1->left == NULL) {
            t1->left = t2->left;
        }
        if (t1->right&&t2->right) {
            merge(t1->right, t2->right);
        }
        else if (t1->right == NULL) {
            t1->right = t2->right;
        }
    }
    TreeNode* mergeTrees_recursive(TreeNode* t1, TreeNode* t2) {
        if (!t1) return t2;
        if (!t2) return t1;
        TreeNode* res=t1;
        merge(t1,t2);
        return res;
    }
};