#define CATCH_CONFIG_MAIN
#include <vector>

#include "../../../third_party/catch2/catch.hpp"
#include "solution.hpp"

using namespace std;

TEST_CASE("test1") {
  Solution solution;
  vector<vector<int>> grid = {{0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0},
                              {0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0},
                              {0, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0},
                              {0, 1, 0, 0, 1, 1, 0, 0, 1, 0, 1, 0, 0},
                              {0, 1, 0, 0, 1, 1, 0, 0, 1, 1, 1, 0, 0},
                              {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0},
                              {0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0},
                              {0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0}};
  int result = 6;

  CHECK(solution.maxAreaOfIsland(grid) == result);
}

TEST_CASE("test2") {
  Solution solution;
  vector<vector<int>> grid = {{0, 0, 0, 0, 0, 0, 0, 0}};
  int result = 0;

  CHECK(solution.maxAreaOfIsland(grid) == result);
}

TEST_CASE("test_ext_1") {
  Solution solution;
  vector<vector<int>> grid = {{0}};
  int result = 0;

  CHECK(solution.maxAreaOfIsland(grid) == result);
}

TEST_CASE("test_ext_2") {
  Solution solution;
  vector<vector<int>> grid = {{1}};
  int result = 1;

  CHECK(solution.maxAreaOfIsland(grid) == result);
}