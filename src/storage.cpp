#include "storage.h"

void Storage::createTable(const string& tableName, vector<string> columns) {
    if (tables.find(tableName) == tables.end()) {
        tables[tableName].push_back(columns);
        cout << "Table '" << tableName << "' created successfully." << endl;
    } else {
        cout << "Table '" << tableName << "' already exists." << endl;
    }
}

void Storage::insertRow(const string& tableName, vector<string> row) {
    if (tables.find(tableName) != tables.end()) {
        tables[tableName].push_back(row);
        cout << "Row inserted into '" << tableName << "'." << endl;
    } else {
        cout << "Table '" << tableName << "' does not exist." << endl;
    }
}

vector<vector<string>> Storage::selectAll(const string& tableName) {
    if (tables.find(tableName) != tables.end()) {
        return tables[tableName];
    }
    cout << "Table '" << tableName << "' does not exist." << endl;
    return {};
}

void Storage::printTable(const string& tableName) {
    if (tables.find(tableName) != tables.end()) {
        for (const auto& row : tables[tableName]) {
            for (const auto& col : row) {
                cout << col << " \t ";
            }
            cout << endl;
        }
    } else {
        cout << "Table '" << tableName << "' does not exist." << endl;
    }
}
