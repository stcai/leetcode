#define CATCH_CONFIG_MAIN
#include <string>

#include "../../../third_party/catch2/catch.hpp"
#include "solution.hpp"

using namespace std;

TEST_CASE("test_sample_1") {
  Solution solution;
  string s = "leetcode";
  vector<string> wordDict = {"leet", "code"};
  bool result = true;

  CHECK(solution.wordBreak(s, wordDict) == result);
}

TEST_CASE("test_sample_2") {
  Solution solution;
  string s = "applepenapple";
  vector<string> wordDict = {"apple", "pen"};
  bool result = true;

  CHECK(solution.wordBreak(s, wordDict) == result);
}

TEST_CASE("test_sample_3") {
  Solution solution;
  string s = "catsandog";
  vector<string> wordDict = {"cats", "dog", "sand", "and", "cat"};
  bool result = false;

  CHECK(solution.wordBreak(s, wordDict) == result);
}