#include "cache.h"

LRUCache::LRUCache(int cap) {
    capacity = cap;
}

void LRUCache::access(int key) {
    if (cache.find(key) != cache.end()) {
        lru.erase(cache[key]);
    } else if (lru.size() >= capacity) {
        cache.erase(lru.back());
        lru.pop_back();
    }
    lru.push_front(key);
    cache[key] = lru.begin();
}

void LRUCache::display() {
    for (int key : lru) cout << key << " ";
    cout << endl;
}
