#include <iostream>
#include <print>
using namespace std;

template <typename T>
struct TreeNode {
    T val;
    TreeNode* left;
    TreeNode* right;

    TreeNode() : val(0), left(NULL), right(NULL) {}
    TreeNode(T value) : val(value), left(NULL), right(NULL) {}
};

template <typename T>
class BinarySearchTree {
  private:
    TreeNode<T>* root;

    TreeNode<T>* _insert(TreeNode<T>* node, T val) {
        if (!node) {
            return new TreeNode<T>(val);
        }

        if (val < node->val) {
            node->left = _insert(node->left, val);
        }
        else if (val > node->val) {
            node->right = _insert(node->right, val);
        }

        return node;
    }
    TreeNode<T>* _remove(TreeNode<T>* node, T val) {
        if (!node) {
            return NULL;
        }

        if (val < node->val) {
            node->left = _remove(node->left, val);
        }
        else if (val > node->val) {
            node->right = _remove(node->right, val);
        }
        else if (val == node->val) {
            if (!node->left && !node->left) {
                delete node;
                return NULL;
            }
            else if (!node->right) {
                TreeNode<T>* leftChildren = node->left;
                delete node;
                return leftChildren;
            }
            else if (!node->left) {
                TreeNode<T>* rightChildren = node->right;
                delete node;
                return rightChildren;
            }
            else {
                TreeNode<T>* temp = node->right;
                while (temp->left) {
                    temp = temp->left;
                }
                node->val = temp->val;
                node->right = _remove(node->right, temp->val);
            }
        }

        return node;
    }
    bool _search(TreeNode<T>* node, T val) {
        if (!node) {
            return false;
        }

        if (val > node->val) {
            return _search(node->right, val);
        }
        else if (val < node->val) {
            return _search(node->left, val);
        }

        return true;
    }
    void _inOrder(TreeNode<T>* node) {
        if (node) {
            _inOrder(node->left);
            print("{} ", node->val);
            _inOrder(node->right);
        }
    }

  public:
    BinarySearchTree() : root(NULL) {}
    ~BinarySearchTree() {
        while (root) {
            remove(root->val);
        }
    }
    void insert(T val) {
        root = _insert(root, val);
    }
    void remove(T val) {
        root = _remove(root, val);
    }
    bool search(T val) {
        return _search(root, val);
    }
    void inOrder() {
        _inOrder(root);
        print("\n");
    }
};

int main() {
    BinarySearchTree<int> bst;

    bst.insert(50);
    bst.insert(30);
    bst.insert(70);
    bst.insert(40);
    bst.insert(80);
    bst.insert(60);
    bst.insert(100);

    cout << "中序遍历：";
    bst.inOrder();
    cout << "查找 100：" << bst.search(100) << endl;
    cout << "查找 50：" << bst.search(50) << endl;

    bst.remove(70);
    cout << "中序遍历：";
    bst.inOrder();

    bst.insert(65);
    cout << "中序遍历：";
    bst.inOrder();

    return 0;
}