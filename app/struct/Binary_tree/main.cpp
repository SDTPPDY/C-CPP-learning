#include <bits/stdc++.h>
using namespace std;

template <typename T>
struct TreeNode {
    T val;
    TreeNode* left;
    TreeNode* right;

    TreeNode() : val(0), left(NULL), right(NULL) {}
    TreeNode(T data) : val(data), left(NULL), right(NULL) {}
};

template <typename T>
class Tree {
  private:
    TreeNode<T>* nodes;
    TreeNode<T>* root;
    size_t nodeSize;

    TreeNode<T>* create(T a[], int size, int nodeId, T nullNode);
    void visit(TreeNode<T>* node);
    void PreOrder(TreeNode<T>* node);
    void InOrder(TreeNode<T>* node);
    void PostOrder(TreeNode<T>* node);
    void LevelOreder(TreeNode<T>* node);

  public:
    Tree();
    Tree(int maxNodes);
    ~Tree();
    TreeNode<T>* GetTreeNode(int nodeId);
    void CreateTree(T a[], int size, T nullNode);
    void PreOrderTraversal();
    void InOrderTravelsal();
    void PostOrderTravelsal();
    void LevelOrderTravelsal();
};

template <typename T>
Tree<T>::Tree() {
    nodeSize = 10001;
    root = NULL;
    nodes = new TreeNode<T>[nodeSize];
}

template <typename T>
Tree<T>::Tree(int maxNodes) {
    nodeSize = maxNodes;
    root = NULL;
    nodes = new TreeNode<T>[nodeSize];
}

template <typename T>
Tree<T>::~Tree() {
    delete[] nodes;
}

template <typename T>
TreeNode<T>* Tree<T>::GetTreeNode(int nodeId) {
    return &nodes[nodeId];
}

template <typename T>
void Tree<T>::visit(TreeNode<T>* node) {
    cout << node->val;
}

template <typename T>
void Tree<T>::PreOrder(TreeNode<T>* node) {
    if (node) {
        visit(node);
        cout << " ";
        PreOrder(node->left);
        PreOrder(node->right);
    }
}

template <typename T>
void Tree<T>::InOrder(TreeNode<T>* node) {
    if (node) {
        InOrder(node->left);
        visit(node);
        cout << " ";
        InOrder(node->right);
    }
}

template <typename T>
void Tree<T>::PostOrder(TreeNode<T>* node) {
    if (node) {
        PostOrder(node->left);
        PostOrder(node->right);
        visit(node);
        cout << " ";
    }
}

template <typename T>
void Tree<T>::LevelOreder(TreeNode<T>* node) {
    if (node) {
        visit(node);
        cout << " ";
        PreOrder(node->left);
        PreOrder(node->right);
    }
}

template <typename T>
TreeNode<T>* Tree<T>::create(T a[], int size, int nodeId, T nullNode) {
    if (nodeId >= size || a[nodeId] == nullNode) {
        return NULL;
    }

    TreeNode<T>* node = GetTreeNode(nodeId);
    node->val = a[nodeId];
    node->left = create(a, size, nodeId * 2, nullNode);
    node->right = create(a, size, nodeId * 2 + 1, nullNode);
    return node;
}

template <typename T>
void Tree<T>::CreateTree(T a[], int size, T nullNode) {
    root = create(a, size, 1, nullNode);
}

template <typename T>
void Tree<T>::PreOrderTraversal() {
    PreOrder(root);
}

template <typename T>
void Tree<T>::InOrderTravelsal() {
    InOrder(root);
}

template <typename T>
void Tree<T>::PostOrderTravelsal() {
    PostOrder(root);
}

template <typename T>
void Tree<T>::LevelOrderTravelsal() {
}

int main() {
    const char nullNode = '-';
    char a[15] = {nullNode, 'a', 'b', 'c', 'd',
                  nullNode, 'e', 'f', 'g', 'h',
                  nullNode, nullNode, nullNode, nullNode, 'i'};

    Tree<char> T(15);
    T.CreateTree(a, 15, nullNode);
    T.PreOrderTraversal();
    cout << endl;
    T.InOrderTravelsal();
    cout << endl;
    T.PostOrderTravelsal();
    cout << endl;
    return 0;
}