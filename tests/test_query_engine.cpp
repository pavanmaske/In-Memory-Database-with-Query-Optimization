#include <gtest/gtest.h>
#include "../src/query_engine.h"

TEST(QueryEngineTest, CreateTableAndInsert) {
    QueryEngine db;
    db.createTable("users", {"id", "name"});
    db.insertRow("users", {"1", "Alice"});

    std::ostringstream output;
    std::streambuf* oldCout = std::cout.rdbuf(output.rdbuf());
    db.select("users");
    std::cout.rdbuf(oldCout);

    std::string expected = "1 Alice\n";
    EXPECT_EQ(output.str(), expected);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
