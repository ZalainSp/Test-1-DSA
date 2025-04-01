#include <iostream>
#include "BinaryTree.h"

using namespace std;

int main() {
    
    BinaryTree tree;

tree.insert(50);
tree.insert(30);
tree.insert(70);
tree.insert(20);
tree.insert(40);
tree.insert(60);
tree.insert(80);
tree.inorderTraversal();   // Output: 20 30 40 50 60 70 80
tree.preorderTraversal();  // Output: 50 30 20 40 70 60 80
tree.postorderTraversal(); // Output: 20 40 30 60 80 70 50
tree.levelOrderTraversal(); // Output: 50 30 70 20 40 60 80
tree.count();         // Output: 7
tree.findHeight();    // Output: 2 (height of the tree)
tree.findMin();       // Output: 20 (minimum value in the tree)
tree.search(40);  // Output: Found
tree.search(90);  // Output: Not Found
tree.deleteNode(30);
tree.inorderTraversal();   // Output should reflect deletion


}