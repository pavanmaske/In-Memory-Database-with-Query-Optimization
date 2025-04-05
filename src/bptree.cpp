#include "bptree.h"

BPTreeNode::BPTreeNode(bool leaf) {
    isLeaf = leaf;
    next = nullptr;
}

BPTree::BPTree() {
    root = new BPTreeNode(true);
}

void BPTree::insertInternal(int key, BPTreeNode* cursor, BPTreeNode* child) {
    if (cursor->keys.size() < ORDER - 1) {
        auto it = upper_bound(cursor->keys.begin(), cursor->keys.end(), key);
        cursor->keys.insert(it, key);
        cursor->children.insert(cursor->children.begin() + (it - cursor->keys.begin()) + 1, child);
    } else {
        // Split node logic
    }
}

void BPTree::insert(int key) {
    BPTreeNode* cursor = root;
    if (cursor->keys.size() < ORDER - 1) {
        cursor->keys.push_back(key);
        sort(cursor->keys.begin(), cursor->keys.end());
    } else {
        // Handle node splitting
    }
}

bool BPTree::search(int key) {
    BPTreeNode* cursor = root;
    while (!cursor->isLeaf) {
        int i = 0;
        while (i < cursor->keys.size() && key > cursor->keys[i]) i++;
        cursor = cursor->children[i];
    }
    return find(cursor->keys.begin(), cursor->keys.end(), key) != cursor->keys.end();
}

void BPTree::display() {
    printTree(root, 0);
}

void BPTree::printTree(BPTreeNode* node, int level) {
    if (!node) return;
    cout << "Level " << level << " : ";
    for (int key : node->keys) cout << key << " ";
    cout << endl;
    for (auto child : node->children) printTree(child, level + 1);
}
