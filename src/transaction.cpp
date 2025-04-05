#include "transaction.h"

Transaction::Transaction() {
    active = false;
}

void Transaction::begin() {
    log.clear();
    active = true;
    cout << "Transaction started" << endl;
}

void Transaction::write(string command) {
    if (!active) {
        cout << "No active transaction!" << endl;
        return;
    }
    log.push_back(command);
}

void Transaction::commit() {
    if (!active) return;
    cout << "Transaction committed" << endl;
    log.clear();
    active = false;
}

void Transaction::rollback() {
    if (!active) return;
    cout << "Transaction rolled back" << endl;
    log.clear();
    active = false;
}
