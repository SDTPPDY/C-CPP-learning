// 450. Delete Node in a BST
// https://leetcode.com/problems/delete-node-in-a-bst/

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

class Solution {
    int findMin(TreeNode* root) {
        while (root->left) {
            root = root->left;
        }
        return root->val;
    }

    TreeNode* delRoot(TreeNode* root) {
        if (root->left == nullptr) {
            TreeNode* del_root = root;
            TreeNode* ret_root = root->right;
            delete del_root;
            return ret_root;
        }
        else if (root->right == nullptr) {
            TreeNode* del_root = root;
            TreeNode* ret_root = root->left;
            delete del_root;
            return ret_root;
        }
        else {
            TreeNode* ret_root = new TreeNode(0);
            TreeNode* del_root = root;
            ret_root->val = findMin(root->right);
            ret_root->right = deleteNode(root->right, ret_root->val);
            ret_root->left = root->left;
            delete del_root;
            return ret_root;
        }
    }

  public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        if (root == nullptr)
            return nullptr;
        else if (key > root->val) {
            root->right = deleteNode(root->right, key);
        }
        else if (key < root->val) {
            root->left = deleteNode(root->left, key);
        }
        else {
            return delRoot(root);
        }

        return root;
    }
};