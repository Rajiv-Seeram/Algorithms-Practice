#include <iostream>

class BST
{
    private:
    struct node
    {
        int value;
        node* left;
        node* right;
    };

    node* root;
    void addLeafPrivate(int value, node* ptr);
    void printInOrderPrivate(node* ptr);
    public:

    BST();
    node* createLeaf(int value);
    void addLeaf(int value);
    void printInOrder();
};
