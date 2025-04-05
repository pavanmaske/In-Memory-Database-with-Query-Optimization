#include "query_engine.h"

void QueryEngine::createTable(string name, vector<string> columns) {
    tables[name] = new Table(name, columns);
}

void QueryEngine::insertRow(string table, vector<string> values) {
    if (tables.find(table) == tables.end()) {
        cout << "Table not found!" << endl;
        return;
    }
    tables[table]->insert(values);
    index.insert(stoi(values[0])); // Assuming first column is the primary key
}

void QueryEngine::select(string table) {
    if (tables.find(table) == tables.end()) {
        cout << "Table not found!" << endl;
        return;
    }
    tables[table]->print();
}
