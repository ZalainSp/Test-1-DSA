#include <iostream>
#include "BinaryTree.h" 
using namespace std;    

BinaryTree::BinaryTree(){
    root = nullptr;

}

BinaryTree::~BinaryTree(){
    //destructor to delete all nodes in the tree
    while (root) {
        deleteNode(root,root->value);  //delete nodes one by one
    }
    
}

void BinaryTree::insert(int value){

    if(root == nullptr){
        root = new TreeNode(value);  //create new node if tree is empty
        return;
    }
    
}

bool BinaryTree::search(int value) const{

    

}

void BinaryTree::deleteNode(int value){

    
}

void BinaryTree::inorderTraversal() const{

    if(root == nullptr){
        cout<<"The tree is empty"<<endl;
        return;
    }
    inorderTraversal(root->left);
    cout<<root->value<<endl;
    inorderTraversal(root->right);

}

void BinaryTree::preorderTraversal() const{

    
}

void BinaryTree::postorderTraversal() const{

    
}

void BinaryTree::levelOrderTraversal() const{

    
}

int BinaryTree::count() const{

    
}

int BinaryTree::findHeight() const{ 

    
}

