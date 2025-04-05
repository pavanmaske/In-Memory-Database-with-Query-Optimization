#ifndef CACHE_H
#define CACHE_H

#include <bits/stdc++.h>
using namespace std;

class LRUCache {
private:
    int capacity;
    list<int> lru;
    unordered_map<int, list<int>::iterator> cache;

public:
    LRUCache(int cap);
    void access(int key);
    void display();
};

#endif
