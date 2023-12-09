94. Binary Tree Inorder Traversal (POTD)

Begin at the leftmost node of the tree.Traverse the left subtree by applying the in-order traversal recursively to the left child.Visit the current node.Traverse the right subtree by applying the in-order traversal recursively to the right child.Continue this process until all nodes in the tree are visited.This traversal ensures that nodes are visited in ascending order based on their values in a binary search tree.



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
     vector<int>res;
    
    vector<int> inorderTraversal(TreeNode* root) {
        if(root==nullptr){
            return res;
        }
        inorderTraversal(root->left);
        res.push_back(root->val);
        inorderTraversal(root->right);
        return res;

    }
};

