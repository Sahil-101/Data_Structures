/* Binary Seacrh tree test functions file
Date -  12-09-20
Made by Sahil */

#include <stdio.h>
#include <assert.h>
#include "bst.h"

void test_newBST();
void test_addDataBST();
void test_deleteDataBST();
void test_sizeRecursivelyBst();
void test_countLeaves();

int main()
{
    test_newBST();
    printf("\n");
    test_addDataBST();
    printf("\n");
    test_deleteDataBST();
    printf("\n");
    test_sizeRecursivelyBst();
    printf("\n");
    test_countLeaves();
    printf("\n");
    printf("All Test Case Passed You are awesome !!!! \n");
}

void test_newBST()
{
    printf("testing newBst \n");
    BST tree = newBst();

    assert(tree != NULL);

    assert(sizeBst(tree) == 0);
    printf("newBst passed !! \n");

    freeBST(tree);

    return;
}

void test_addDataBST()
{
    printf("testing addDataBST :)\n");
    BST tree = newBst();

    addDataBst(1, tree);
    addDataBst(2, tree);

    assert(sizeBst(tree) == 2);
    addDataBst(3, tree);
    assert(sizeBst(tree) == 3);

    printf("addDataBST passed!!\n");

    freeBST(tree);
    return;
}

void test_deleteDataBST()
{
    BST tree = newBst();

    addDataBst(2, tree);
    addDataBst(3, tree);
    addDataBst(1, tree);
    addDataBst(0, tree);
    addDataBst(5, tree);
    deleteDataBst(2, tree);
    deleteDataBst(3, tree);
    deleteDataBst(1, tree);
    deleteDataBst(0, tree);
    deleteDataBst(5, tree);
    addDataBst(4, tree);
    deleteDataBst(4, tree);

    freeBST(tree);
    return;
}

void test_sizeRecursivelyBst()
{
    printf("testing sizetecursivelyBst\n");
    BST tree=newBst();
    addDataBst(1, tree);
    addDataBst(2, tree);
    addDataBst(0, tree);
    addDataBst(3, tree);

    assert(sizeBst(tree)==sizeRecursivelyBst(tree));
    printf("sizeRecursivelyBst passed!!\n");

    freeBST(tree);
    return;
}

void test_countLeaves()
{
    printf("Testing test_countLeaves() \n");
    BST tree=newBst();

    addDataBst(10, tree);
    addDataBst(8, tree);
    addDataBst(9, tree);
    addDataBst(6, tree);
    addDataBst(7, tree);
    addDataBst(5, tree);
    addDataBst(15, tree);
    addDataBst(11, tree);
    addDataBst(20, tree);
    addDataBst(19, tree);
    addDataBst(25, tree);
    assert(CountLeaves(tree)==6);
    printf("Test case passed!! \n");

    freeBST(tree);
    return;
}