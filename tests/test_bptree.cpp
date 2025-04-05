#include <gtest/gtest.h>
#include "../src/bptree.h"

TEST(BPTreeTest, InsertAndSearch) {
    BPTree tree;
    tree.insert(10);
    tree.insert(20);
    tree.insert(30);

    EXPECT_TRUE(tree.search(10));
    EXPECT_TRUE(tree.search(20));
    EXPECT_TRUE(tree.search(30));
    EXPECT_FALSE(tree.search(40));
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
