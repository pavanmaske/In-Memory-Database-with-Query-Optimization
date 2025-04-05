#ifndef QUERY_ENGINE_H
#define QUERY_ENGINE_H

#include <bits/stdc++.h>
#include "storage.h"
#include "bptree.h"

using namespace std;

class QueryEngine {
private:
    unordered_map<string, Table*> tables;
    BPTree index;

public:
    void createTable(string name, vector<string> columns);
    void insertRow(string table, vector<string> values);
    void select(string table);
};

#endif
