#define CATCH_CONFIG_MAIN
#include <string>

#include "../../../third_party/catch2/catch.hpp"
#include "solution.hpp"

using namespace std;

TEST_CASE("test_sample_1") {
  Solution solution;
  string s = "12";
  int result = 2;

  CHECK(solution.numDecodings(s) == result);
}

TEST_CASE("test_sample_2") {
  Solution solution;
  string s = "226";
  int result = 3;

  CHECK(solution.numDecodings(s) == result);
}

TEST_CASE("test_sample_3") {
  Solution solution;
  string s = "0";
  int result = 0;

  CHECK(solution.numDecodings(s) == result);
}

TEST_CASE("test_leetcode_case_225") {
  Solution solution;
  string s = "10011";
  int result = 0;

  CHECK(solution.numDecodings(s) == result);
}