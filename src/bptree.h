#ifndef BPTREE_H
#define BPTREE_H

#include <bits/stdc++.h>
using namespace std;

const int ORDER = 4; // B+ Tree order

class BPTreeNode {
public:
    vector<int> keys;
    vector<BPTreeNode*> children;
    bool isLeaf;
    BPTreeNode* next; // Pointer for leaf nodes (linked list)

    BPTreeNode(bool leaf);
};

class BPTree {
private:
    BPTreeNode* root;
    void insertInternal(int key, BPTreeNode* cursor, BPTreeNode* child);
    void printTree(BPTreeNode* node, int level);

public:
    BPTree();
    void insert(int key);
    bool search(int key);
    void display();
};

#endif
