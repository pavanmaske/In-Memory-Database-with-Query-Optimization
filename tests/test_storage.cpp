#include <gtest/gtest.h>
#include "../src/storage.h"

TEST(StorageTest, InsertAndRetrieve) {
    Table users("users", {"id", "name"});
    users.insert({"1", "Pavan"});
    users.insert({"2", "John"});

    std::ostringstream output;
    std::streambuf* oldCout = std::cout.rdbuf(output.rdbuf());
    users.print();
    std::cout.rdbuf(oldCout);

    std::string expected = "1 Pavan\n2 John\n";
    EXPECT_EQ(output.str(), expected);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
