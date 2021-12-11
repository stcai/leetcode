#define CATCH_CONFIG_MAIN
#include <vector>

#include "../../../third_party/catch2/catch.hpp"
#include "solution.hpp"

using namespace std;

TEST_CASE("test1") {
  int x = 4;

  Solution solution;
  CHECK(solution.mySqrt(x) == 2);

  Solution2 solution2;
  CHECK(solution2.mySqrt(x) == 2);
}

TEST_CASE("test2") {
  int x = 8;

  Solution solution;
  CHECK(solution.mySqrt(x) == 2);

  Solution2 solution2;
  CHECK(solution2.mySqrt(x) == 2);
}

TEST_CASE("test_ext_1") {
  int x = 0;

  Solution solution;
  CHECK(solution.mySqrt(x) == 0);

  Solution2 solution2;
  CHECK(solution2.mySqrt(x) == 0);
}

TEST_CASE("test_ext_2") {
  int x = 2147483647;

  Solution solution;
  CHECK(solution.mySqrt(x) == 46340);

  Solution2 solution2;
  CHECK(solution2.mySqrt(x) == 46340);
}

TEST_CASE("test_ext_3") {
  int x = 2147395600;

  Solution solution;
  CHECK(solution.mySqrt(x) == 46340);

  Solution2 solution2;
  CHECK(solution2.mySqrt(x) == 46340);
}