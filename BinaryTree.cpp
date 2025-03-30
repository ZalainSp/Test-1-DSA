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

void BinaryTree::inorderTraversal() const{ // call the private helper function

    if(root == nullptr){ //check if the tree is empty
        cout<<"The tree is empty"<<endl; //if empty output message and return
        return;
    }
    inorderTraversal(root); //call the private helper function

}
void BinaryTree::inorderTraversal(TreeNode* node) const{ //private helper function

    if(node== nullptr){ //check if the node is null
        return;
    }
    inorderTraversal(node->left); //call the left child node
    cout<<node->value<<endl; //ouput value of the node
    inorderTraversal(node->right); //call the right child node
    
}

void BinaryTree::preorderTraversal() const{ //call the private helper function

    if(root == nullptr){ //check if the tree is empty
        cout<<"The tree is empty"<<endl; //if empty output message and return
        return;
    }
    preorderTraversal(root); //call the private helper function
    
}
void BinaryTree::preorderTraversal(TreeNode* node) const{ //private helper function
    if(node == nullptr){ //check if the node is null
        return;
}
cout<<node->value<<endl; //output the node value
preorderTraversal(node->left); //call the left child node
preorderTraversal(node->right); // call the right child node
}

void BinaryTree::postorderTraversal() const{ //call the private helper function

    if(root == nullptr){ //check if the tree is empty
        cout<<"The tree is empty"<<endl; //if empty output message and return
        return;
    }
    postorderTraversal(root); //call the private helper function
}

void BinaryTree::postorderTraversal(TreeNode* node) const{ //private helper function
    if(node == nullptr){ //check if the node is null}
        return;
    }
    postorderTraversal(node->left); //call the left child node
    postorderTraversal(node->right); //call the right child node
    cout<<node->value<<endl; //output the node value
}

void BinaryTree::levelOrderTraversal() const{

    
}

int BinaryTree::count() const{

    
}

int BinaryTree::findHeight() const{ 

    
}



