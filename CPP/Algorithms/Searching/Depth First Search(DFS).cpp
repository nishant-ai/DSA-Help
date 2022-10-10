#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() {
        val = 0;
        left = NULL;
        right = NULL;
    }
    TreeNode(int x) {
        val = x;
        left = NULL;
        right = NULL;
    }
};

vector<int> dfs(TreeNode* root, vector<int> &DFSTraversal) {
    if(!root) return;
    DFSTraversal.push_back(root->val);
    dfs(root->left,DFSTraversal);
    dfs(root->right,DFSTraversal);
}

int main() {
    TreeNode *root = new TreeNode(3), *temp = root;
    temp->left = new TreeNode(9);
    temp->right = new TreeNode(20);
    temp = temp->right;
    temp->left = new TreeNode(15);
    temp->right = new TreeNode(7);
    vector<int> DFSTraversal;
    dfs(root,DFSTraversal);
    for(auto &val:DFSTraversal) cout<<val<<" ";
    cout<<endl;
    return 0;
}