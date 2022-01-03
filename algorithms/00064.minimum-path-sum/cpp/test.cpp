#define CATCH_CONFIG_MAIN
#include <string>
#include <vector>

#include "../../../third_party/catch2/catch.hpp"
#include "solution.hpp"

using namespace std;

TEST_CASE("test_sample_1") {
  Solution solution;
  vector<vector<int>> grid = {{1, 3, 1}, {1, 5, 1}, {4, 2, 1}};
  int result = 7;

  CHECK(solution.minPathSum(grid) == result);
}

TEST_CASE("test_sample_2") {
  Solution solution;
  vector<vector<int>> grid = {{1, 2, 3}, {4, 5, 6}};
  int result = 12;

  CHECK(solution.minPathSum(grid) == result);
}