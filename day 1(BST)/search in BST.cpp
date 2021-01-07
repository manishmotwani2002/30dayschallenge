							/*******Leetcode 700 **********/
/*****************************Search in BST(return the node if found)************************/

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
 */
class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root==NULL)
            return root;
        if(val == root->val)
        {
            return root;
        }
        else if(val > root->val)
        {
            root=searchBST(root->right,val);
        }
        else
        {
            root=searchBST(root->left,val);
        }
        return root;
    }
};
