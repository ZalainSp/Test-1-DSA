# Test-1

This project is a c++ implementation of a Binary Search Tree. It includes features such as insertion, deltion, searching and different
tree traversal methods. 

Heres an overview of some of the features:
-Insertion: Add a new value to the tree
-Deletion: Delete a node and restructure the tree.
-Search: Check if a value exists in the tree.
-Traversals:
-Inorder (Left, Root, Right)
-Preorder (Root, Left, Right)
-Postorder (Left, Right, Root)
-Level Order (traversal by level)
-Count: Returns the total number of nodes in the tree.
-Tree Height: calculates the height of the tree.
-Find Minimum: Finds the node with the smallest value in the tree.

The main contains insertion functions for example:
tree.insert(50);
You can insert more or change the number you wish to insert.

Take note when deleting nodes it has to have atleast 1 child in order to work properly
If a root is deleted it is replaced by its child if it has any.
If a root has 2 children it is replaced by the smallest child in the right subtree.

Inserting duplicates is not allowed.
You cannot delete non existent values.

https://youtu.be/kJNXr0bSvOg //Code demo
https://youtu.be/-lTBVLa8uHk //Tree traversal
