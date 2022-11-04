#ifndef NODE_H
#define NODE_H


struct Node
{
    int key;
    struct Node* p;
    struct Node* left;
    struct Node* right;
};
#endif // NODE_H
