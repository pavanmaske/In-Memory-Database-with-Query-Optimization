#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <bits/stdc++.h>
using namespace std;

class Transaction {
private:
    vector<string> log;
    bool active;

public:
    Transaction();
    void begin();
    void write(string command);
    void commit();
    void rollback();
};

#endif
