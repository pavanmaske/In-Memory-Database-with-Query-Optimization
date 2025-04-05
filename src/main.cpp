#include "query_engine.h"

int main() {
    QueryEngine db;
    db.createTable("users", {"id", "name"});
    db.insertRow("users", {"1", "Pavan"});
    db.insertRow("users", {"2", "John"});
    
    cout << "Data in users table:" << endl;
    db.select("users");
    return 0;
}
