#ifndef STORAGE_H
#define STORAGE_H

#include <bits/stdc++.h>
using namespace std;

class Storage {
private:
    unordered_map<string, vector<vector<string>>> tables; // Table name -> Rows

public:
    void createTable(const string& tableName, vector<string> columns);
    void insertRow(const string& tableName, vector<string> row);
    vector<vector<string>> selectAll(const string& tableName);
    void printTable(const string& tableName);
};

#endif // STORAGE_H