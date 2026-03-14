#include <iostream>
using namespace std;

template <typename T>
struct ListNode {
    T data;
    ListNode* next;

    ListNode(T value) : data(value), next(NULL) {}
};

template <typename T>
struct TreeNode {
    T data;
    ListNode<TreeNode<T>*>* childrenHead;

    TreeNode() : childrenHead(NULL) {}

    void AddChild(TreeNode<T>* node) {
        ListNode<TreeNode<T>*>* childNode = new ListNode<TreeNode<T>*>(node);
        if (childrenHead == NULL) {
            childrenHead = childNode;
        }
        else {
            childNode->next = childrenHead;
            childrenHead = childNode;
        }
    }
};

template <typename T>
class Tree {
  private:
    TreeNode<T>* nodes;
    TreeNode<T>* root;

  public:
    Tree();
    Tree(int maxNodes);
    ~Tree();
    TreeNode<T>* GetTreeNode(int id);
    void SetRoot(int rootId);
    void AddChild(int parentId, int sonId);
    void AssignData(int nodeId, T data);
    void Print(TreeNode<T>* node = NULL);
};

template <typename T>
Tree<T>::Tree() {
    nodes = new TreeNode<T>[10001];
    root = NULL;
}

template <typename T>
Tree<T>::Tree(int maxNodes) {
    nodes = new TreeNode<T>[maxNodes];
    root = NULL;
}

template <typename T>
Tree<T>::~Tree() {
    delete[] nodes;
}

template <typename T>
TreeNode<T>* Tree<T>::GetTreeNode(int id) {
    return &nodes[id];
}

template <typename T>
void Tree<T>::SetRoot(int rootId) {
    root = GetTreeNode(rootId);
}

template <typename T>
void Tree<T>::AddChild(int parentId, int sonId) {
    GetTreeNode(parentId)->AddChild(GetTreeNode(sonId));
}

template <typename T>
void Tree<T>::AssignData(int nodeId, T data) {
    GetTreeNode(nodeId)->data = data;
}

template <typename T>
void Tree<T>::Print(TreeNode<T>* node) {
    if (node == NULL) {
        node = root;
    }
    cout << node->data;
    ListNode<TreeNode<T>*>* tmp = node->childrenHead;
    while (tmp) {
        Print(tmp->data);
        tmp = tmp->next;
    }
}

int main() {
    Tree<char> T(9);
    T.SetRoot(0);
    for (int i = 0; i < 9; i++) {
        T.AssignData(i, 'a' + i);
    }
    T.AddChild(0, 2);
    T.AddChild(0, 1);
    T.AddChild(1, 3);
    T.AddChild(3, 8);
    T.AddChild(3, 7);
    T.AddChild(3, 6);
    T.AddChild(2, 5);
    T.AddChild(2, 4);

    T.Print();
    return 0;
}
