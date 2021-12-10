#define CATCH_CONFIG_MAIN

#include "../../../third_party/catch2/catch.hpp"
#include "solution.hpp"

using namespace std;

TEST_CASE("test1") {
  Solution solution;
  int n = 10;
  CHECK(solution.monotoneIncreasingDigits(n) == 9);
}

TEST_CASE("test2") {
  Solution solution;
  int n = 123;
  CHECK(solution.monotoneIncreasingDigits(n) == 123);
}

TEST_CASE("test3") {
  Solution solution;
  int n = 332;
  CHECK(solution.monotoneIncreasingDigits(n) == 299);
}

TEST_CASE("test_ext_1") {
  Solution solution;
  int n = 100;
  CHECK(solution.monotoneIncreasingDigits(n) == 99);
}