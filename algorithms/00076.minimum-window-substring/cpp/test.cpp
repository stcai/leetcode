#define CATCH_CONFIG_MAIN
#include <vector>

#include "../../../third_party/catch2/catch.hpp"
#include "solution.hpp"

using namespace std;

TEST_CASE("test1") {
  Solution solution;
  string s("ADOBECODEBANC");
  string t("ABC");
  CHECK(solution.minWindow(s, t) == "BANC");
}

TEST_CASE("test2") {
  Solution solution;
  string s("a");
  string t("a");
  CHECK(solution.minWindow(s, t) == "a");
}

TEST_CASE("test3") {
  Solution solution;
  string s("a");
  string t("aa");
  CHECK(solution.minWindow(s, t) == "");
}

TEST_CASE("test_ext_1") {
  Solution solution;
  string s("cabwefgewcwaefgcf");
  string t("cae");
  CHECK(solution.minWindow(s, t) == "cwae");
}