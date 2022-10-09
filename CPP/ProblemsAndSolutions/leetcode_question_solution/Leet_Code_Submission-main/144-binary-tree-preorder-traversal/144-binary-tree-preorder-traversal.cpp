/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 //preorder means root left and right 
 */
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> preorder;
        stack<TreeNode*> s;
        
        if(root == NULL)
            return preorder;
        
        s.push(root);
        while(!s.empty()){
            TreeNode* top = s.top();
            preorder.push_back(top->val);
            s.pop();
            
            if(top->right){
                s.push(top->right);
            }
            if(top->left){
                s.push(top->left);
            }
            
        }
        return preorder;
    }
};

