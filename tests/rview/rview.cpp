#include <algorithm>
#include <geom/geom.hpp>
#include <gtest/gtest.h>

using namespace geom;

TEST(init, from_polygon) {
  Polygon<Vector2i> p = {{1, 2}, {1, 3}, {2, 4}};
  ReorderableView<Vector2i> l(p.begin(), p.end());
  ReorderableView<Vector2i> r(p.begin(), p.end());

  Reorder(l.begin(), l.end(),
          [](const Vector2i& lhs, const Vector2i& rhs){
            return lhs.x > rhs.x;
          });


  ASSERT_EQ(std::equal(l.begin(), l.end(), r.begin(), r.end()), false);
}

TEST(init, from_vector) {
  std::vector<Vector2i> p = {{1, 2}, {1, 3}, {2, 4}};
  ReorderableView<Vector2i> l(p.begin(), p.end());
  ReorderableView<Vector2i> r(p.begin(), p.end());

  Reorder(l.begin(), l.end(),
          [](const Vector2i& lhs, const Vector2i& rhs){
            return lhs.x > rhs.x;
          });


  ASSERT_EQ(std::equal(l.begin(), l.end(), r.begin(), r.end()), false);
}

TEST(a, 2) {

}


int main(int argc, char *argv[]) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
