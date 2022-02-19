#define CATCH_CONFIG_MAIN
#include <vector>

#include "../../../third_party/catch2/catch.hpp"
#include "solution.hpp"

using namespace std;

TEST_CASE("test_sample_1") {
  Solution solution;
  vector<vector<char>> matix = {{'1', '0', '1', '0', '0'},
                                {'1', '0', '1', '1', '1'},
                                {'1', '1', '1', '1', '1'},
                                {'1', '0', '0', '1', '0'}};
  int result = 4;

  CHECK(solution.maximalSquare(matix) == result);
}

TEST_CASE("test_sample_2") {
  Solution solution;
  vector<vector<char>> matix = {{'0', '1'}, {'1', '0'}};
  int result = 1;

  CHECK(solution.maximalSquare(matix) == result);
}

TEST_CASE("test_sample_3") {
  Solution solution;
  vector<vector<char>> matix = {{'0'}};
  int result = 0;

  CHECK(solution.maximalSquare(matix) == result);
}