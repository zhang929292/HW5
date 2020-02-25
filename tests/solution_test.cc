#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(depthShould, depthReturn) {
  vector<int> input= {3,2,20,15,27};
  BST t = (input);
  int actual = t.depth();
  int expected = 3;
  EXPECT_EQ(expected, actual);
}
TEST(depthShould1, depthReturn1) {
  vector<int> input= { };
  BST t = (input);
  int actual = t.depth();
  int expected = 0;
  EXPECT_EQ(expected, actual);
}
TEST(nonRecurShould, nonRecurReturn) {
  vector<int> input= {3, 1, 2, 4, 5};
  BST t = (input);
  vector<int> actual = t.InOrderNonRecur();
  vector<int> expected = {1, 2, 3, 4, 5};
  EXPECT_EQ(expected, actual);
}
TEST(RecurShould, RecurReturn) {
  vector<int> input= {3, 1, 2, 4, 5};
  BST t = (input);
  t.inOrderRecur();
  vector<int> actual = t.inOrderRecur();
  vector<int> expected = {1, 2, 3, 4, 5};
  EXPECT_EQ(expected, actual);
}
