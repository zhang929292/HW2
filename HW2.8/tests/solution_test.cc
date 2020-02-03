#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>


TEST(Test, Return) {
  Solution solution;
  std::vector<int> inputs = {637, 231, 123, 43, 69, 43, 900, 10, 7, 21, 99, 0, 500};
  EXPECT_EQ(solution.Final(vct), {43, 43, 21,10, 7, 0, 69, 900, 637, 500, 231, 123, 99});
  
}
