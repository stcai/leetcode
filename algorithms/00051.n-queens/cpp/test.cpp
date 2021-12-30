#define CATCH_CONFIG_MAIN
#include <string>
#include <vector>

#include "../../../third_party/catch2/catch.hpp"
#include "solution.hpp"

using namespace std;

TEST_CASE("test_sample_1") {
  int n = 4;
  vector<vector<string>> result = {{".Q..", "...Q", "Q...", "..Q."},
                                   {"..Q.", "Q...", "...Q", ".Q.."}};

  Solution solution;
  CHECK(solution.solveNQueens(n) == result);
}

TEST_CASE("test_sample_2") {
  int n = 1;
  vector<vector<string>> result = {{"Q"}};

  Solution solution;
  CHECK(solution.solveNQueens(n) == result);
}