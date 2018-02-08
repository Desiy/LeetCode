 
struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
     };
 
class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> vec;
        if(!root) return vec;
        queue<TreeNode*> q;       
        q.push(root);
        while(!q.empty()){
            vector<int> v;  
            int si=q.size();                      
            for(int index=0;index<si;++index){
                TreeNode* p=q.front();
                q.pop();
                v.push_back(p->val);
                if(p->left) q.push(p->left);
                if(p->right) q.push(p->right);
                
            }
            vec.push_back(v);
        }
        reverse(vec.begin(),vec.end());
        return vec;
    }
};