/* Binary Seacrh tree test functions file
Date -  12-09-20
Made by Sahil */

#include<stdio.h>
#include<assert.h>
#include "bst.h"

void test_newBST();
void test_addDataBST();
void test_deleteDataBST(); 

int main()
{
    test_newBST();
    printf("\n");
    test_addDataBST();
    printf("\n");
    test_deleteDataBST();
    printf("\n");

    printf("All Test Case Passed You are awesome \n");
}

void test_newBST()
{
    printf("testing newBst \n");
    BST tree=newBst();

    assert(tree!=NULL);

    assert(sizeBst(tree)==0);
    printf("newBst passed !! \n");

    return;
}

void test_addDataBST()
{
    printf("testing addDataBST :)\n");
    BST tree=newBst();

    addDataBst(1, tree);
    addDataBst(2, tree);

    assert(sizeBst(tree)==2);
    addDataBst(3, tree);
    assert(sizeBst(tree)==3);

    printf("addDataBST passed!!\n");

    return;
}

void test_deleteDataBST()
{
    BST tree=newBst();

    addDataBst(2,tree);
    addDataBst(3,tree);
    addDataBst(1,tree);
    addDataBst(0,tree);
    addDataBst(5,tree);

    deleteDataBst(2, tree);
    printf("\n");
    deleteDataBst(3, tree);
    printf("\n");
    deleteDataBst(1, tree);
    printf("\n");
    deleteDataBst(0, tree);
    printf("\n");
    deleteDataBst(5, tree);
    printf("\n");

    return;
    

    
    
}