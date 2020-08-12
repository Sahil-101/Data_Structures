
/* Binary Seacrh tree header file
Date -  10-09-20
Made by Sahil */

#include<stdbool.h>

//Binary Search tree ADT
typedef struct bst* BST;

//function to create new Binary Search tree
BST newBst();

//function to add element to Binary Search tree
void addDataBst(int data, BST bst);

//function to check wheter Binary Search tree is empty or not
bool isEmptyBst(BST tree);

//function to delete data in binary seach tree
void deleteDataBst(int data, BST tree);
