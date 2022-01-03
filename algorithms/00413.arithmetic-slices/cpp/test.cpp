#define CATCH_CONFIG_MAIN
#include <string>
#include <vector>

#include "../../../third_party/catch2/catch.hpp"
#include "solution.hpp"

using namespace std;

TEST_CASE("test_sample_1") {
  Solution solution;
  vector<int> nums = {1, 2, 3, 4};
  int result = 3;

  CHECK(solution.numberOfArithmeticSlices(nums) == result);
}

TEST_CASE("test_sample_2") {
  Solution solution;
  vector<int> nums = {1};
  int result = 0;

  CHECK(solution.numberOfArithmeticSlices(nums) == result);
}

TEST_CASE("test_case_1") {
  Solution solution;
  vector<int> nums = {1, 2};
  int result = 0;

  CHECK(solution.numberOfArithmeticSlices(nums) == result);
}

TEST_CASE("test_case_2") {
  Solution solution;
  vector<int> nums = {1, 2, 3};
  int result = 1;

  CHECK(solution.numberOfArithmeticSlices(nums) == result);
}

TEST_CASE("test_case_3") {
  Solution solution;
  vector<int> nums = {7, 7, 7, 7};
  int result = 3;

  CHECK(solution.numberOfArithmeticSlices(nums) == result);
}