#define CATCH_CONFIG_MAIN
#include <vector>

#include "../../../third_party/catch2/catch.hpp"
#include "solution.hpp"

using namespace std;

TEST_CASE("test_sample_1") {
  Solution solution;
  int n = 12;
  int result = 3;

  CHECK(solution.numSquares(n) == result);
}

TEST_CASE("test_sample_2") {
  Solution solution;
  int n = 13;
  int result = 2;

  CHECK(solution.numSquares(n) == result);
}
