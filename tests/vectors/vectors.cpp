#include <gtest/gtest.h>
#include <geom/geom.hpp>

TEST(init, Vector2i) {
    geom::Vector2i v = {.x=1, .y=2};
    ASSERT_EQ(v.x, 1);
    ASSERT_EQ(v.y, 2);
}



TEST(init, Vector2f) {
    geom::Vector2f v = {.x=1.0f, .y=2.0f};
    ASSERT_EQ(v.x, 1.0f);
    ASSERT_EQ(v.y, 2.0f);
}


TEST(init, Vector2d) {
    geom::Vector2d v = {.x=1.0, .y=2.0};
    ASSERT_EQ(v.x, 1.0);
    ASSERT_EQ(v.y, 2.0);
}

TEST(summing, Vector2i) {
    using v2 = geom::Vector2i;
    v2 a = {.x=1, .y=2};
    v2 b = {.x=3, .y=4};

    {
        auto s = a + a;
        auto res = geom::Vector2i{.x=2, .y=4};
        ASSERT_EQ(s, res);
    }
    

    {
        auto s = a - a ;
        auto res = geom::Vector2i{.x=0, .y=0};
        ASSERT_EQ(s, res);
    }

    
    {
        geom::Vector2i s = {0, 0};
        s += a + a;
        auto res = geom::Vector2i{.x=2, .y=4};
        ASSERT_EQ(s, res);
    }

}


TEST(subtractiong, Vector2i) {
    using v2 = geom::Vector2i;
    v2 a = {.x=1, .y=2};
    v2 b = {.x=3, .y=4};

    {
        auto s = a - a;
        auto res = geom::Vector2i{.x=0, .y=0};
        ASSERT_EQ(s, res);
    }


    {
        auto s = a - a ;
        auto res = geom::Vector2i{.x=0, .y=0};
        ASSERT_EQ(s, res);
    }


    {
        geom::Vector2i s = {0, 0};
        s += a + a;
        auto res = geom::Vector2i{.x=2, .y=4};
        ASSERT_EQ(s, res);
    }

}

int main(int argc, char* argv[]) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();    
}
