#define CATCH_CONFIG_MAIN
#include <vector>

#include "../../../third_party/catch2/catch.hpp"
#include "solution.hpp"

using namespace std;

TEST_CASE("test1") {
  vector<int> nums = {5, 7, 7, 8, 8, 10};
  int target = 8;
  vector<int> result = {3, 4};

  Solution solution;
  CHECK(solution.searchRange(nums, target) == result);
}

TEST_CASE("test2") {
  vector<int> nums = {5, 7, 7, 8, 8, 10};
  int target = 6;
  vector<int> result = {-1, -1};

  Solution solution;
  CHECK(solution.searchRange(nums, target) == result);
}

TEST_CASE("test3") {
  vector<int> nums = {};
  int target = 0;
  vector<int> result = {-1, -1};

  Solution solution;
  CHECK(solution.searchRange(nums, target) == result);
}

TEST_CASE("test_ext_1") {
  vector<int> nums = {5, 7, 7, 8, 8, 10};
  int target = 4;
  vector<int> result = {-1, -1};

  Solution solution;
  CHECK(solution.searchRange(nums, target) == result);
}

TEST_CASE("test_ext_2") {
  vector<int> nums = {5, 7, 7, 8, 8, 10};
  int target = 11;
  vector<int> result = {-1, -1};

  Solution solution;
  CHECK(solution.searchRange(nums, target) == result);
}