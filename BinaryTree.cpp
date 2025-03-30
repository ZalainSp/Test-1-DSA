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


