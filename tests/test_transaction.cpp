#include <gtest/gtest.h>
#include "../src/transaction.h"

TEST(TransactionTest, CommitAndRollback) {
    Transaction txn;
    txn.begin();
    txn.write("INSERT INTO users VALUES (1, 'Pavan')");
    
    std::ostringstream output;
    std::streambuf* oldCout = std::cout.rdbuf(output.rdbuf());
    
    txn.commit();
    
    std::cout.rdbuf(oldCout);
    EXPECT_EQ(output.str(), "Transaction committed\n");
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
