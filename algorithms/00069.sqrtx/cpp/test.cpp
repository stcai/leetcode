#define CATCH_CONFIG_MAIN
#include <vector>

#include "../../../third_party/catch2/catch.hpp"
#include "solution.hpp"

using namespace std;

TEST_CASE("test1") {
  Solution solution;
  int x = 4;
  CHECK(solution.mySqrt(x) == 2);
}

TEST_CASE("test2") {
  Solution solution;
  int x = 8;
  CHECK(solution.mySqrt(x) == 2);
}

TEST_CASE("test_ext_1") {
  Solution solution;
  int x = 0;
  CHECK(solution.mySqrt(x) == 0);
}

TEST_CASE("test_ext_2") {
  Solution solution;
  int x = 2147483647;
  CHECK(solution.mySqrt(x) == 46340);
}