#define CATCH_CONFIG_MAIN
#include <vector>

#include "../../../third_party/catch2/catch.hpp"
#include "solution.hpp"

using namespace std;

TEST_CASE("test1") {
  vector<int> nums{2, 5, 6, 0, 0, 1, 2};
  int target = 0;
  bool result = true;

  Solution solution;
  CHECK(solution.search(nums, target) == result);
}

TEST_CASE("test2") {
  vector<int> nums{2, 5, 6, 0, 0, 1, 2};
  int target = 3;
  bool result = false;

  Solution solution;
  CHECK(solution.search(nums, target) == result);
}

TEST_CASE("test_ext_1") {
  vector<int> nums{2, 2, 2, 2, 2, 2, 2};
  int target = 3;
  bool result = false;

  Solution solution;
  CHECK(solution.search(nums, target) == result);
}

TEST_CASE("test_ext_2") {
  vector<int> nums{2, 2, 2, 2, 2, 2, 2};
  int target = 2;
  bool result = true;

  Solution solution;
  CHECK(solution.search(nums, target) == result);
}

TEST_CASE("test_ext_3") {
  vector<int> nums{1, 0, 1, 1, 1};
  int target = 0;
  bool result = true;

  Solution solution;
  CHECK(solution.search(nums, target) == result);
}