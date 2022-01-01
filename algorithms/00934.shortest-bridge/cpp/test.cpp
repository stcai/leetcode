#define CATCH_CONFIG_MAIN
#include <vector>

#include "../../../third_party/catch2/catch.hpp"
#include "solution.hpp"

using namespace std;

TEST_CASE("test_sample_1") {
  Solution solution;
  vector<vector<int>> grid{{0, 1}, {1, 0}};
  int result = 1;

  CHECK(solution.shortestBridge(grid) == result);
}

TEST_CASE("test_sample_2") {
  Solution solution;
  vector<vector<int>> grid{{0, 1, 0}, {0, 0, 0}, {0, 0, 1}};
  int result = 2;

  CHECK(solution.shortestBridge(grid) == result);
}

TEST_CASE("test_sample_3") {
  Solution solution;
  vector<vector<int>> grid{{1, 1, 1, 1, 1},
                           {1, 0, 0, 0, 1},
                           {1, 0, 1, 0, 1},
                           {1, 0, 0, 0, 1},
                           {1, 1, 1, 1, 1}};
  int result = 1;

  CHECK(solution.shortestBridge(grid) == result);
}