#define CATCH_CONFIG_MAIN
#include <vector>

#include "../../../third_party/catch2/catch.hpp"
#include "solution.hpp"

using namespace std;

TEST_CASE("test_sample_1") {
  Solution solution;
  vector<vector<int>> mat = {{0, 0, 0}, {0, 1, 0}, {0, 0, 0}};
  vector<vector<int>> result = {{0, 0, 0}, {0, 1, 0}, {0, 0, 0}};

  CHECK(solution.updateMatrix(mat) == result);
}

TEST_CASE("test_sample_2") {
  Solution solution;
  vector<vector<int>> mat = {{0, 0, 0}, {0, 1, 0}, {1, 1, 1}};
  vector<vector<int>> result = {{0, 0, 0}, {0, 1, 0}, {1, 2, 1}};

  CHECK(solution.updateMatrix(mat) == result);
}