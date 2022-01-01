#define CATCH_CONFIG_MAIN
#include <string>
#include <vector>

#include "../../../third_party/catch2/catch.hpp"
#include "solution.hpp"

using namespace std;

TEST_CASE("test_sample_1") {
  Solution solution;
  int n = 2;
  int result = 2;

  CHECK(solution.climbStairs(n) == result);
}

TEST_CASE("test_sample_2") {
  Solution solution;
  int n = 3;
  int result = 3;

  CHECK(solution.climbStairs(n) == result);
}

TEST_CASE("test_case_1") {
  Solution solution;
  int n = 1;
  int result = 1;

  CHECK(solution.climbStairs(n) == result);
}

TEST_CASE("test_case_2") {
  Solution solution;
  int n = 5;
  int result = 8;

  CHECK(solution.climbStairs(n) == result);
}