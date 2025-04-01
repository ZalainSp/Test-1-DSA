#ifndef BINARYTREE_H
#define BINARYTREE_H
#include <iostream>
#include <queue>

// Definition of a binary tree node
struct TreeNode {
    int value;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) : value(val), left(nullptr), right(nullptr) {}
};

class BinaryTree {
public:
    BinaryTree();
    ~BinaryTree();

    void insert(int value);
    bool search(int value) const;
    void deleteNode(int value);
    void inorderTraversal() const;
    void preorderTraversal() const;
    void postorderTraversal() const;
    void levelOrderTraversal() const;
    int count() const;
    int findHeight() const;
    int findMin() const;

private:
    TreeNode* root;

    void insert(TreeNode*& node, int value);
    bool search(TreeNode* node, int value) const;
    void deleteNode(TreeNode* node, int value);
    void inorderTraversal(TreeNode* node) const;
    void preorderTraversal(TreeNode* node) const;
    void postorderTraversal(TreeNode* node) const;
    void levelOrderTraversal(TreeNode* node) const;
    int count(TreeNode* node) const;
    int findHeight(TreeNode* node) const;
    void destroyTree(TreeNode* node);
    TreeNode* findMin(TreeNode* node) const;

};

#endif // BINARYTREE_H