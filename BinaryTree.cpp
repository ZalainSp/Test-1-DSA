#include <iostream>
#include "BinaryTree.h" 
#include <queue>
using namespace std;    

BinaryTree::BinaryTree(){
    root = nullptr;

}

BinaryTree::~BinaryTree(){
    //destructor to delete all nodes in the tree
    destroyTree(root); //call the private helper function to delete all nodes in the tree
    
}

void BinaryTree::destroyTree(TreeNode* node){
    if(node == nullptr){ //check if the node is null
        return;
    }
    destroyTree(node->left); //delete left child node
    destroyTree(node->right); //delete right child node
    delete node; //delete the current node
}

void BinaryTree::insert(int value){
    insert(root, value); //call the private helper function to insert the value into the tree
}

void BinaryTree::insert(TreeNode*& node, int value){ //private helper function

    if(root == nullptr){
        root = new TreeNode(value);  //create new node if tree is empty
        return;
    }
    if(value<root->value){ //check if value is less, if so go to left subtree
        insert(root->left,value);
    }else if(value>root->value){ //check if value is greater, if so go to right subtree
        insert(root->right,value);
    }

}

bool BinaryTree::search(int value) const{
search(root,value); //call the private helper function to search for the value in the tree
}
bool BinaryTree::search(TreeNode* node, int value) const{ //private helper function

    if(node ==nullptr || node->value ==value){ //check if the node is null or if the value is found
        return root;
    }
    if(value < node->value){
        search(node -> left ,value); //check if value is less, if so go to left subtree
    }
    search(node->right,value); //check if value is greater, if so go to right subtree
}

void BinaryTree::deleteNode(int value){ //delete node function

    deleteNode(root,value); //call the private helper function to delete the node
    

}

void BinaryTree::deleteNode(TreeNode*& node,  int value){

    if(node == nullptr){ //check if the tree is empty
        return;
    }
    if(value< node->value){ //check if value is less, if so go to left subtree
        deleteNode(node->left,value) ; //call the private helper function to delete the node
    }else if (value>node->value){ //check if value is greater, if so go to right subtree
        deleteNode(node->right,value); //call the private helper function to delete the node
    }else {
        if(node->left == nullptr){ //check if left child node is null
            TreeNode* temp = node;
            node = node->right; //set the left child node as the new root
            delete temp; //delete the old root
}else if(node->right == nullptr){ //check if right child node is null
    TreeNode* temp = node;
    node = node->left; //set the left child node as the new root
    delete temp; //delete the old root
}else{
TreeNode* temp = findMin(node->right);
node->value = temp->value;
deleteNode(node->right, temp->value);
}
}
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

void BinaryTree::levelOrderTraversal() const{ //level order traversal function
    
    if(root == nullptr){ //check if tree is empty
        cout<<"The tree is empty"<<endl; //if empty output message and return
        return;
    }
    queue <TreeNode*> q; //create a queue to store the nodes
    q.push(root); //push the root node into a queue

    while(!q.empty()) //while the queue is empty
    {
        int levelsize = q.size(); //get the size of the queue
        for(int i =0; i<levelsize; i++){

        TreeNode* current = q.front(); //get the node in front of the queue
        q.pop(); //remove the node from the queue

        cout<<current->value<<endl; //output the node value

            if(i<levelsize -1){ //add comma between the values
                cout<<", "; 
            }

        if(current->left != nullptr) //check if the left child node is not null
        {
            q.push(current->left); //push the left child node into the queue
        }
        if(current->right != nullptr) //check if the right node is not null
        {
            q.push(current->right); //push the right child node into the queue
        }
    }
    cout<<endl; 
 }
}


int BinaryTree::count() const{
    return count(root); //call the private helper function
        
    }

int BinaryTree::count(TreeNode* node) const{ //private helper function
        
    if(node == nullptr){ //check if the node is null
        return 0; 
    }
    return 1 + count(node->left)+count(node->right); //return the counf of the nodes adding the root (1) and the left and right nodes
}

int BinaryTree::findHeight() const{ 
    return findHeight(root); //call the private helper function
    
}
int BinaryTree::findHeight(TreeNode* node) const{
    if(node == nullptr){ //check if the node is null
        return -1;
    }
    int left = findHeight(node->left); //height of the left subtree
    int right = findHeight(node->right); //hieght of the right subtree
    return max(left,right); //return the max height betweeen the left and right subtrees
}


TreeNode* BinaryTree::findMin(TreeNode* node) const{ //private helper function to find the minimum value in the tree
    if(node == nullptr){ //check if the node is null
        return nullptr;
    }
    while(node->left != nullptr){ //while the left child node is not null
        node = node->left; //go to the left child node
    }
    return node; //return the minimum value in the tree
}

