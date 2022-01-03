#define CATCH_CONFIG_MAIN
#include <string>
#include <vector>

#include "../../../third_party/catch2/catch.hpp"
#include "solution.hpp"

using namespace std;

TEST_CASE("test_sample_1") {
  Solution solution;
  vector<int> nums = {1, 2, 3, 1};
  int result = 4;

  CHECK(solution.rob(nums) == result);
}

TEST_CASE("test_sample_2") {
  Solution solution;
  vector<int> nums = {2, 7, 9, 3, 1};
  int result = 12;

  CHECK(solution.rob(nums) == result);
}

TEST_CASE("test_case_1") {
  Solution solution;
  vector<int> nums = {2};
  int result = 2;

  CHECK(solution.rob(nums) == result);
}

TEST_CASE("test_case_2") {
  Solution solution;
  vector<int> nums = {2, 3};
  int result = 3;

  CHECK(solution.rob(nums) == result);
}

TEST_CASE("test_leetcode_case_64") {
  Solution solution;
  vector<int> nums = {2, 1, 1, 2};
  int result = 4;

  CHECK(solution.rob(nums) == result);
}
