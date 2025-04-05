#include <gtest/gtest.h>
#include "../src/cache.h"

TEST(CacheTest, LRUReplacement) {
    LRUCache cache(2);
    cache.access(1);
    cache.access(2);
    cache.access(3);  // 1 should be removed

    std::ostringstream output;
    std::streambuf* oldCout = std::cout.rdbuf(output.rdbuf());
    
    cache.display();
    
    std::cout.rdbuf(oldCout);
    EXPECT_EQ(output.str(), "3 2 \n");
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
