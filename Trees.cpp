#include <iostream>
#include "Trees.h"
using namespace std;

BST::BST()
{
    root = NULL;
}

BST::node* BST::createLeaf(int key)
{
    node* n = new node;
    n->value = key;
    n->left = NULL;
    n->right = NULL;
    return n;
}

void BST::addLeaf(int value)
{
    addLeafPrivate(value, root);
}

void BST::addLeafPrivate(int value, node* ptr)
{
    if (root == NULL)
    {
        root = createLeaf(value);
    }
    else if(value < ptr->value)
    {
        if(ptr->left != NULL)
        {
            addLeafPrivate(value, ptr->left);
        }
        else
        {
            ptr->left = createLeaf(value);
        }
    }
    else if(value > ptr->value)
    {
        if(ptr->right != NULL)
        {
            addLeafPrivate(value, ptr->right);
        }
        else
        {
            ptr->right = createLeaf(value);
        }
    }
    else
    {
        cout << "The value " << value << " has already been added to the tree" << endl;
    }
}

void BST::printInOrder()
{
    printInOrderPrivate(root);
}

void BST::printInOrderPrivate(node* ptr)
{
    if(root != NULL)
    {
        if(ptr->left != NULL)
        {
            printInOrderPrivate(ptr->left);
        }
        cout << ptr->value << " ";
        if(ptr->right != NULL)
        {
            printInOrderPrivate(ptr->right);
        }
    }
    else
    {
        cout<<"The tree is empty"<<endl;
    }
}