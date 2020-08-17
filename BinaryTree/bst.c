/* Binary Seacrh tree functions file
Date -  10-09-20
Made by Sahil */

#include <stdlib.h>
#include <assert.h>
#include "bst.h"

typedef struct node *NODE;

struct node
{
    int data;
    NODE left;
    NODE right;
};

typedef struct bst
{
    NODE head;
    size_t size;
} mybst;

//function to create new Binary Search tree
BST newBst()
{
    BST new = malloc(sizeof(mybst));
    assert(new != 0);

    new->head = NULL;

    new->size = 0;

    return new;
}

//function for this file only to find the new node's right place 
//and insert
static void insertNode(NODE new, NODE head)
{
    NODE node;
    node = head;

    if (node->data < new->data)
    {
        if (node->right == NULL)
        {
            node->right = new;
        }
        else
        {
            insertNode(new, node->right);
        }
    }
    else
    {
        if (node->left == NULL)
        {
            node->left = new;
        }
        else
        {
            insertNode(new, node->left);
        }
    }

    return;
}

//function to add element to Binary Search tree
void addDataBst(int data, BST tree)
{
    assert(tree != NULL);

    NODE new = malloc(sizeof(struct node));
    assert(new != NULL);

    new->data = data;
    new->left = NULL;
    new->right = NULL;

    if (isEmptyBst(tree))
    {
        tree->head = new;
    }
    else
    {
        insertNode(new, tree->head);
    }

    tree->size++;

    return;
}

//function to check wheter Binary Search tree is empty or not
bool isEmptyBst(BST tree)
{
    assert(tree != NULL);

    if (tree->size)
    {
        return false;
    }

    return true;
}

//depth first search 
static int DFSearch(int data, NODE head)
{
    printf("Traversing on to %d\n", head->data);

    if(data==head->data)
    {
        return data;
    }
    else if(head->left!=NULL)
    {
        DFSearch(data, head->left);
    }
    else if(head->right!=NULL)
    {
        DFSearch(data, head->right);
    }

    return 999;
}

//function to delete data in binary seach tree
void deleteDataBst(int data, BST bst)
{
    //todo   
    int value=DFSearch(data, bst->head);
    printf("Data is %d\n", value);
}

size_t sizeBst(BST tree)
{
    return tree->size;
}
//function to free all tree
void freeBST(BST tree)
{
    assert(tree!=NULL);

    for(NODE i=tree->head; i!=NULL;);
    //todo
}
